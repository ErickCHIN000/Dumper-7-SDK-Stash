#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Companion_Owner_CritChance_Base.Init_Companion_Owner_CritChance_Base_C
// (None)

class UClass* UInit_Companion_Owner_CritChance_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Companion_Owner_CritChance_Base_C");

	return Clss;
}


// Init_Companion_Owner_CritChance_Base_C Init_Companion_Owner_CritChance_Base.Default__Init_Companion_Owner_CritChance_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Companion_Owner_CritChance_Base_C* UInit_Companion_Owner_CritChance_Base_C::GetDefaultObj()
{
	static class UInit_Companion_Owner_CritChance_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Companion_Owner_CritChance_Base_C*>(UInit_Companion_Owner_CritChance_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_Companion_Owner_CritChance_Base.Init_Companion_Owner_CritChance_Base_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCritModifierTotals_ModifierTotal                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCritSourceModifiers        CallFunc_GetCritModifierTotals_ReturnValue                       (None)

float UInit_Companion_Owner_CritChance_Base_C::CalculateAttributeInitialValue(class UObject* Context, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCritModifierTotals_ModifierTotal, const struct FCritSourceModifiers& CallFunc_GetCritModifierTotals_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_Companion_Owner_CritChance_Base_C", "CalculateAttributeInitialValue");

	Params::UInit_Companion_Owner_CritChance_Base_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCritModifierTotals_ModifierTotal = CallFunc_GetCritModifierTotals_ModifierTotal;
	Parms.CallFunc_GetCritModifierTotals_ReturnValue = CallFunc_GetCritModifierTotals_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


