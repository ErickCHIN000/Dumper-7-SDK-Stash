#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_IsCompanionInCombat.Condition_IsCompanionInCombat_C
// (None)

class UClass* UCondition_IsCompanionInCombat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_IsCompanionInCombat_C");

	return Clss;
}


// Condition_IsCompanionInCombat_C Condition_IsCompanionInCombat.Default__Condition_IsCompanionInCombat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_IsCompanionInCombat_C* UCondition_IsCompanionInCombat_C::GetDefaultObj()
{
	static class UCondition_IsCompanionInCombat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_IsCompanionInCombat_C*>(UCondition_IsCompanionInCombat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_IsCompanionInCombat.Condition_IsCompanionInCombat_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIDrone_PlayerCompanionParent_C>K2Node_DynamicCast_AsIDrone_Player_Companion_Parent              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompanionInCombat_Res                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCondition_IsCompanionInCombat_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, TScriptInterface<class IIDrone_PlayerCompanionParent_C> K2Node_DynamicCast_AsIDrone_Player_Companion_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCompanionInCombat_Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_IsCompanionInCombat_C", "EvaluateCondition");

	Params::UCondition_IsCompanionInCombat_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.K2Node_DynamicCast_AsIDrone_Player_Companion_Parent = K2Node_DynamicCast_AsIDrone_Player_Companion_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsCompanionInCombat_Res = CallFunc_IsCompanionInCombat_Res;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


