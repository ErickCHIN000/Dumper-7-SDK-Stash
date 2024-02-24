#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_Shield_IgnoreManufacturerName.Condition_Shield_IgnoreManufacturerName_C
// (None)

class UClass* UCondition_Shield_IgnoreManufacturerName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_Shield_IgnoreManufacturerName_C");

	return Clss;
}


// Condition_Shield_IgnoreManufacturerName_C Condition_Shield_IgnoreManufacturerName.Default__Condition_Shield_IgnoreManufacturerName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_Shield_IgnoreManufacturerName_C* UCondition_Shield_IgnoreManufacturerName_C::GetDefaultObj()
{
	static class UCondition_Shield_IgnoreManufacturerName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_Shield_IgnoreManufacturerName_C*>(UCondition_Shield_IgnoreManufacturerName_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_Shield_IgnoreManufacturerName.Condition_Shield_IgnoreManufacturerName_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABP_ShieldMod_C*             K2Node_DynamicCast_AsBP_Shield_Mod                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCondition_Shield_IgnoreManufacturerName_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class ABP_ShieldMod_C* K2Node_DynamicCast_AsBP_Shield_Mod, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_Shield_IgnoreManufacturerName_C", "EvaluateCondition");

	Params::UCondition_Shield_IgnoreManufacturerName_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.K2Node_DynamicCast_AsBP_Shield_Mod = K2Node_DynamicCast_AsBP_Shield_Mod;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


