#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_OverrideManufacturerDescription.Condition_OverrideManufacturerDescription_C
// (None)

class UClass* UCondition_OverrideManufacturerDescription_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_OverrideManufacturerDescription_C");

	return Clss;
}


// Condition_OverrideManufacturerDescription_C Condition_OverrideManufacturerDescription.Default__Condition_OverrideManufacturerDescription_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_OverrideManufacturerDescription_C* UCondition_OverrideManufacturerDescription_C::GetDefaultObj()
{
	static class UCondition_OverrideManufacturerDescription_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_OverrideManufacturerDescription_C*>(UCondition_OverrideManufacturerDescription_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_OverrideManufacturerDescription.Condition_OverrideManufacturerDescription_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABPWeap_BaseWeapon_C*        K2Node_DynamicCast_AsBPWeap_Base_Weapon                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCondition_OverrideManufacturerDescription_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class ABPWeap_BaseWeapon_C* K2Node_DynamicCast_AsBPWeap_Base_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_OverrideManufacturerDescription_C", "EvaluateCondition");

	Params::UCondition_OverrideManufacturerDescription_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.K2Node_DynamicCast_AsBPWeap_Base_Weapon = K2Node_DynamicCast_AsBPWeap_Base_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


