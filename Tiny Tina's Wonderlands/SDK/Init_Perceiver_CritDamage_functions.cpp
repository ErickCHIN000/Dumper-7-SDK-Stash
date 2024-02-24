#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Perceiver_CritDamage.Init_Perceiver_CritDamage_C
// (None)

class UClass* UInit_Perceiver_CritDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Perceiver_CritDamage_C");

	return Clss;
}


// Init_Perceiver_CritDamage_C Init_Perceiver_CritDamage.Default__Init_Perceiver_CritDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Perceiver_CritDamage_C* UInit_Perceiver_CritDamage_C::GetDefaultObj()
{
	static class UInit_Perceiver_CritDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Perceiver_CritDamage_C*>(UInit_Perceiver_CritDamage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_Perceiver_CritDamage.Init_Perceiver_CritDamage_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPWeap_PS_DAL_C*            K2Node_DynamicCast_AsBPWeap_PS_DAL                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCritModifierTotals_ModifierTotal                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCritSourceModifiers        CallFunc_GetCritModifierTotals_ReturnValue                       (None)

float UInit_Perceiver_CritDamage_C::CalculateAttributeInitialValue(class UObject* Context, class ABPWeap_PS_DAL_C* K2Node_DynamicCast_AsBPWeap_PS_DAL, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetCritModifierTotals_ModifierTotal, const struct FCritSourceModifiers& CallFunc_GetCritModifierTotals_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_Perceiver_CritDamage_C", "CalculateAttributeInitialValue");

	Params::UInit_Perceiver_CritDamage_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsBPWeap_PS_DAL = K2Node_DynamicCast_AsBPWeap_PS_DAL;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetCritModifierTotals_ModifierTotal = CallFunc_GetCritModifierTotals_ModifierTotal;
	Parms.CallFunc_GetCritModifierTotals_ReturnValue = CallFunc_GetCritModifierTotals_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


