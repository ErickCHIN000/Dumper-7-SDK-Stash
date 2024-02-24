#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cond_IsInIndigoDungeon.Cond_IsInIndigoDungeon_C
// (None)

class UClass* UCond_IsInIndigoDungeon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cond_IsInIndigoDungeon_C");

	return Clss;
}


// Cond_IsInIndigoDungeon_C Cond_IsInIndigoDungeon.Default__Cond_IsInIndigoDungeon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCond_IsInIndigoDungeon_C* UCond_IsInIndigoDungeon_C::GetDefaultObj()
{
	static class UCond_IsInIndigoDungeon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCond_IsInIndigoDungeon_C*>(UCond_IsInIndigoDungeon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cond_IsInIndigoDungeon.Cond_IsInIndigoDungeon_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AIndigoDungeon*              CallFunc_GetIndigoDungeon_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCombatEncounter*            CallFunc_GetCurrentEncounter_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCond_IsInIndigoDungeon_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AIndigoDungeon* CallFunc_GetIndigoDungeon_ReturnValue, class UCombatEncounter* CallFunc_GetCurrentEncounter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cond_IsInIndigoDungeon_C", "EvaluateCondition");

	Params::UCond_IsInIndigoDungeon_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.CallFunc_GetIndigoDungeon_ReturnValue = CallFunc_GetIndigoDungeon_ReturnValue;
	Parms.CallFunc_GetCurrentEncounter_ReturnValue = CallFunc_GetCurrentEncounter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


