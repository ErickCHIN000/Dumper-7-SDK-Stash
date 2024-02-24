#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InitBarbarian_09_HealAmount.InitBarbarian_09_HealAmount_C
// (None)

class UClass* UInitBarbarian_09_HealAmount_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InitBarbarian_09_HealAmount_C");

	return Clss;
}


// InitBarbarian_09_HealAmount_C InitBarbarian_09_HealAmount.Default__InitBarbarian_09_HealAmount_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInitBarbarian_09_HealAmount_C* UInitBarbarian_09_HealAmount_C::GetDefaultObj()
{
	static class UInitBarbarian_09_HealAmount_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInitBarbarian_09_HealAmount_C*>(UInitBarbarian_09_HealAmount_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InitBarbarian_09_HealAmount.InitBarbarian_09_HealAmount_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPassive_Parent_C>K2Node_DynamicCast_AsIPassive_Parent                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSkillGrade_Res                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInitBarbarian_09_HealAmount_C::CalculateAttributeInitialValue(class UObject* Context, TScriptInterface<class IIPassive_Parent_C> K2Node_DynamicCast_AsIPassive_Parent, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 CallFunc_GetSkillGrade_Res, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InitBarbarian_09_HealAmount_C", "CalculateAttributeInitialValue");

	Params::UInitBarbarian_09_HealAmount_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsIPassive_Parent = K2Node_DynamicCast_AsIPassive_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_GetSkillGrade_Res = CallFunc_GetSkillGrade_Res;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue1 = CallFunc_GetDataTableValueFromHandle_ReturnValue1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


