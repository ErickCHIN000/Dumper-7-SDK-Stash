#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Perceiver_CritChance.Init_Perceiver_CritChance_C
// (None)

class UClass* UInit_Perceiver_CritChance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Perceiver_CritChance_C");

	return Clss;
}


// Init_Perceiver_CritChance_C Init_Perceiver_CritChance.Default__Init_Perceiver_CritChance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Perceiver_CritChance_C* UInit_Perceiver_CritChance_C::GetDefaultObj()
{
	static class UInit_Perceiver_CritChance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Perceiver_CritChance_C*>(UInit_Perceiver_CritChance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_Perceiver_CritChance.Init_Perceiver_CritChance_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCritModifierTotals_ModifierTotal                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCritSourceModifiers        CallFunc_GetCritModifierTotals_ReturnValue                       (None)

float UInit_Perceiver_CritChance_C::CalculateAttributeInitialValue(class UObject* Context, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCritModifierTotals_ModifierTotal, const struct FCritSourceModifiers& CallFunc_GetCritModifierTotals_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_Perceiver_CritChance_C", "CalculateAttributeInitialValue");

	Params::UInit_Perceiver_CritChance_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCritModifierTotals_ModifierTotal = CallFunc_GetCritModifierTotals_ModifierTotal;
	Parms.CallFunc_GetCritModifierTotals_ReturnValue = CallFunc_GetCritModifierTotals_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


