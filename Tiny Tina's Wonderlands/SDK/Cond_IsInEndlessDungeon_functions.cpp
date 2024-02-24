#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cond_IsInEndlessDungeon.Cond_IsInEndlessDungeon_C
// (None)

class UClass* UCond_IsInEndlessDungeon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cond_IsInEndlessDungeon_C");

	return Clss;
}


// Cond_IsInEndlessDungeon_C Cond_IsInEndlessDungeon.Default__Cond_IsInEndlessDungeon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCond_IsInEndlessDungeon_C* UCond_IsInEndlessDungeon_C::GetDefaultObj()
{
	static class UCond_IsInEndlessDungeon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCond_IsInEndlessDungeon_C*>(UCond_IsInEndlessDungeon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cond_IsInEndlessDungeon.Cond_IsInEndlessDungeon_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AEndlessdungeon*             CallFunc_GetEndlessDungeon_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERunnerType             CallFunc_GetCurrentRunnerType_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCond_IsInEndlessDungeon_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AEndlessdungeon* CallFunc_GetEndlessDungeon_ReturnValue, enum class ERunnerType CallFunc_GetCurrentRunnerType_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cond_IsInEndlessDungeon_C", "EvaluateCondition");

	Params::UCond_IsInEndlessDungeon_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.CallFunc_GetEndlessDungeon_ReturnValue = CallFunc_GetEndlessDungeon_ReturnValue;
	Parms.CallFunc_GetCurrentRunnerType_ReturnValue = CallFunc_GetCurrentRunnerType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


