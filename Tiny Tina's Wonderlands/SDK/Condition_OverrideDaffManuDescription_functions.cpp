#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_OverrideDaffManuDescription.Condition_OverrideDaffManuDescription_C
// (None)

class UClass* UCondition_OverrideDaffManuDescription_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_OverrideDaffManuDescription_C");

	return Clss;
}


// Condition_OverrideDaffManuDescription_C Condition_OverrideDaffManuDescription.Default__Condition_OverrideDaffManuDescription_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_OverrideDaffManuDescription_C* UCondition_OverrideDaffManuDescription_C::GetDefaultObj()
{
	static class UCondition_OverrideDaffManuDescription_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_OverrideDaffManuDescription_C*>(UCondition_OverrideDaffManuDescription_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_OverrideDaffManuDescription.Condition_OverrideDaffManuDescription_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABPWeap_BaseWeapon_C*        K2Node_DynamicCast_AsBPWeap_Base_Weapon                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCondition_OverrideDaffManuDescription_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class ABPWeap_BaseWeapon_C* K2Node_DynamicCast_AsBPWeap_Base_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_OverrideDaffManuDescription_C", "EvaluateCondition");

	Params::UCondition_OverrideDaffManuDescription_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.K2Node_DynamicCast_AsBPWeap_Base_Weapon = K2Node_DynamicCast_AsBPWeap_Base_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue1 = CallFunc_EqualEqual_FloatFloat_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


