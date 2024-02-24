#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_HasElemental.Condition_HasElemental_C
// (None)

class UClass* UCondition_HasElemental_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_HasElemental_C");

	return Clss;
}


// Condition_HasElemental_C Condition_HasElemental.Default__Condition_HasElemental_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_HasElemental_C* UCondition_HasElemental_C::GetDefaultObj()
{
	static class UCondition_HasElemental_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_HasElemental_C*>(UCondition_HasElemental_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_HasElemental.Condition_HasElemental_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AWeapon*                     K2Node_DynamicCast_AsWeapon                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxDamageType*              CallFunc_GetDamageType_ReturnValue                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsElementalType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCondition_HasElemental_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AWeapon* K2Node_DynamicCast_AsWeapon, bool K2Node_DynamicCast_bSuccess, class UGbxDamageType* CallFunc_GetDamageType_ReturnValue, bool CallFunc_IsElementalType_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_HasElemental_C", "EvaluateCondition");

	Params::UCondition_HasElemental_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.K2Node_DynamicCast_AsWeapon = K2Node_DynamicCast_AsWeapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDamageType_ReturnValue = CallFunc_GetDamageType_ReturnValue;
	Parms.CallFunc_IsElementalType_ReturnValue = CallFunc_IsElementalType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


