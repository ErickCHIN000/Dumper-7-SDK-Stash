#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cond_ShrineCompletion.Cond_ShrineCompletion_C
// (None)

class UClass* UCond_ShrineCompletion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cond_ShrineCompletion_C");

	return Clss;
}


// Cond_ShrineCompletion_C Cond_ShrineCompletion.Default__Cond_ShrineCompletion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCond_ShrineCompletion_C* UCond_ShrineCompletion_C::GetDefaultObj()
{
	static class UCond_ShrineCompletion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCond_ShrineCompletion_C*>(UCond_ShrineCompletion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cond_ShrineCompletion.Cond_ShrineCompletion_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPrimaryPlayerController_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakChallengesComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChallengeComplete_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCond_ShrineCompletion_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class APlayerController* CallFunc_GetPrimaryPlayerController_ReturnValue, class UOakChallengesComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsChallengeComplete_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cond_ShrineCompletion_C", "EvaluateCondition");

	Params::UCond_ShrineCompletion_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.CallFunc_GetPrimaryPlayerController_ReturnValue = CallFunc_GetPrimaryPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsChallengeComplete_ReturnValue = CallFunc_IsChallengeComplete_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


