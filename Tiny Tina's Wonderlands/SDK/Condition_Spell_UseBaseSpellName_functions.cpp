#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_Spell_UseBaseSpellName.Condition_Spell_UseBaseSpellName_C
// (None)

class UClass* UCondition_Spell_UseBaseSpellName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_Spell_UseBaseSpellName_C");

	return Clss;
}


// Condition_Spell_UseBaseSpellName_C Condition_Spell_UseBaseSpellName.Default__Condition_Spell_UseBaseSpellName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_Spell_UseBaseSpellName_C* UCondition_Spell_UseBaseSpellName_C::GetDefaultObj()
{
	static class UCondition_Spell_UseBaseSpellName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_Spell_UseBaseSpellName_C*>(UCondition_Spell_UseBaseSpellName_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_Spell_UseBaseSpellName.Condition_Spell_UseBaseSpellName_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABPClass_Spell_C*            K2Node_DynamicCast_AsBPClass_Spell                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCondition_Spell_UseBaseSpellName_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class ABPClass_Spell_C* K2Node_DynamicCast_AsBPClass_Spell, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_Spell_UseBaseSpellName_C", "EvaluateCondition");

	Params::UCondition_Spell_UseBaseSpellName_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.K2Node_DynamicCast_AsBPClass_Spell = K2Node_DynamicCast_AsBPClass_Spell;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


