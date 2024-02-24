#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_TED_HasStabilizer.Condition_TED_HasStabilizer_C
// (None)

class UClass* UCondition_TED_HasStabilizer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_TED_HasStabilizer_C");

	return Clss;
}


// Condition_TED_HasStabilizer_C Condition_TED_HasStabilizer.Default__Condition_TED_HasStabilizer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_TED_HasStabilizer_C* UCondition_TED_HasStabilizer_C::GetDefaultObj()
{
	static class UCondition_TED_HasStabilizer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_TED_HasStabilizer_C*>(UCondition_TED_HasStabilizer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_TED_HasStabilizer.Condition_TED_HasStabilizer_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABPWeap_Tediore_BaseWeapon_C*K2Node_DynamicCast_AsBPWeap_Tediore_Base_Weapon                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCondition_TED_HasStabilizer_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class ABPWeap_Tediore_BaseWeapon_C* K2Node_DynamicCast_AsBPWeap_Tediore_Base_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_TED_HasStabilizer_C", "EvaluateCondition");

	Params::UCondition_TED_HasStabilizer_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.K2Node_DynamicCast_AsBPWeap_Tediore_Base_Weapon = K2Node_DynamicCast_AsBPWeap_Tediore_Base_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


