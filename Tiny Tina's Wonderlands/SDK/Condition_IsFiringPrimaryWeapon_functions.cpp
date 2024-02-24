#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_IsFiringPrimaryWeapon.Condition_IsFiringPrimaryWeapon_C
// (None)

class UClass* UCondition_IsFiringPrimaryWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_IsFiringPrimaryWeapon_C");

	return Clss;
}


// Condition_IsFiringPrimaryWeapon_C Condition_IsFiringPrimaryWeapon.Default__Condition_IsFiringPrimaryWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_IsFiringPrimaryWeapon_C* UCondition_IsFiringPrimaryWeapon_C::GetDefaultObj()
{
	static class UCondition_IsFiringPrimaryWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_IsFiringPrimaryWeapon_C*>(UCondition_IsFiringPrimaryWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_IsFiringPrimaryWeapon.Condition_IsFiringPrimaryWeapon_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AOakCharacter*               K2Node_DynamicCast_AsOak_Character                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWeapon*                     CallFunc_GetWeapon_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsing_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCondition_IsFiringPrimaryWeapon_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class AWeapon* CallFunc_GetWeapon_ReturnValue, bool CallFunc_IsUsing_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_IsFiringPrimaryWeapon_C", "EvaluateCondition");

	Params::UCondition_IsFiringPrimaryWeapon_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.K2Node_DynamicCast_AsOak_Character = K2Node_DynamicCast_AsOak_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWeapon_ReturnValue = CallFunc_GetWeapon_ReturnValue;
	Parms.CallFunc_IsUsing_ReturnValue = CallFunc_IsUsing_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


