#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_Ring_IgnoreRingBaseName.Condition_Ring_IgnoreRingBaseName_C
// (None)

class UClass* UCondition_Ring_IgnoreRingBaseName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_Ring_IgnoreRingBaseName_C");

	return Clss;
}


// Condition_Ring_IgnoreRingBaseName_C Condition_Ring_IgnoreRingBaseName.Default__Condition_Ring_IgnoreRingBaseName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_Ring_IgnoreRingBaseName_C* UCondition_Ring_IgnoreRingBaseName_C::GetDefaultObj()
{
	static class UCondition_Ring_IgnoreRingBaseName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_Ring_IgnoreRingBaseName_C*>(UCondition_Ring_IgnoreRingBaseName_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_Ring_IgnoreRingBaseName.Condition_Ring_IgnoreRingBaseName_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCondition_Ring_IgnoreRingBaseName_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, float CallFunc_GetValueOfAttribute_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_Ring_IgnoreRingBaseName_C", "EvaluateCondition");

	Params::UCondition_Ring_IgnoreRingBaseName_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


