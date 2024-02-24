#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_Ring_IgnoreRingPrefix.Condition_Ring_IgnoreRingPrefix_C
// (None)

class UClass* UCondition_Ring_IgnoreRingPrefix_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_Ring_IgnoreRingPrefix_C");

	return Clss;
}


// Condition_Ring_IgnoreRingPrefix_C Condition_Ring_IgnoreRingPrefix.Default__Condition_Ring_IgnoreRingPrefix_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_Ring_IgnoreRingPrefix_C* UCondition_Ring_IgnoreRingPrefix_C::GetDefaultObj()
{
	static class UCondition_Ring_IgnoreRingPrefix_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_Ring_IgnoreRingPrefix_C*>(UCondition_Ring_IgnoreRingPrefix_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_Ring_IgnoreRingPrefix.Condition_Ring_IgnoreRingPrefix_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPClass_Ring_C*             K2Node_DynamicCast_AsBPClass_Ring                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCondition_Ring_IgnoreRingPrefix_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, bool CallFunc_Greater_FloatFloat_ReturnValue, class ABPClass_Ring_C* K2Node_DynamicCast_AsBPClass_Ring, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_Ring_IgnoreRingPrefix_C", "EvaluateCondition");

	Params::UCondition_Ring_IgnoreRingPrefix_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPClass_Ring = K2Node_DynamicCast_AsBPClass_Ring;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


