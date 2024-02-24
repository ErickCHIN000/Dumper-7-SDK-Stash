#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_IsTrue.Condition_IsTrue_C
// (None)

class UClass* UCondition_IsTrue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_IsTrue_C");

	return Clss;
}


// Condition_IsTrue_C Condition_IsTrue.Default__Condition_IsTrue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_IsTrue_C* UCondition_IsTrue_C::GetDefaultObj()
{
	static class UCondition_IsTrue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_IsTrue_C*>(UCondition_IsTrue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_IsTrue.Condition_IsTrue_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UCondition_IsTrue_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_IsTrue_C", "EvaluateCondition");

	Params::UCondition_IsTrue_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


