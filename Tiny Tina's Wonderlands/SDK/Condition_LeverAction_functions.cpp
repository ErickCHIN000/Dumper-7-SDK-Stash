#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_LeverAction.Condition_LeverAction_C
// (None)

class UClass* UCondition_LeverAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_LeverAction_C");

	return Clss;
}


// Condition_LeverAction_C Condition_LeverAction.Default__Condition_LeverAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_LeverAction_C* UCondition_LeverAction_C::GetDefaultObj()
{
	static class UCondition_LeverAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_LeverAction_C*>(UCondition_LeverAction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_LeverAction.Condition_LeverAction_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABPWeap_Jakobs_BaseWeapon_C* K2Node_DynamicCast_AsBPWeap_Jakobs_Base_Weapon                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCondition_LeverAction_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class ABPWeap_Jakobs_BaseWeapon_C* K2Node_DynamicCast_AsBPWeap_Jakobs_Base_Weapon, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_LeverAction_C", "EvaluateCondition");

	Params::UCondition_LeverAction_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.K2Node_DynamicCast_AsBPWeap_Jakobs_Base_Weapon = K2Node_DynamicCast_AsBPWeap_Jakobs_Base_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


