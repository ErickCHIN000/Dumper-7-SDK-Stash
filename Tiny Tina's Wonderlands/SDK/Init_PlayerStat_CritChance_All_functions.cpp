#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_PlayerStat_CritChance_All.Init_PlayerStat_CritChance_All_C
// (None)

class UClass* UInit_PlayerStat_CritChance_All_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_PlayerStat_CritChance_All_C");

	return Clss;
}


// Init_PlayerStat_CritChance_All_C Init_PlayerStat_CritChance_All.Default__Init_PlayerStat_CritChance_All_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_PlayerStat_CritChance_All_C* UInit_PlayerStat_CritChance_All_C::GetDefaultObj()
{
	static class UInit_PlayerStat_CritChance_All_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_PlayerStat_CritChance_All_C*>(UInit_PlayerStat_CritChance_All_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_PlayerStat_CritChance_All.Init_PlayerStat_CritChance_All_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakPlayerController*        K2Node_DynamicCast_AsOak_Player_Controller                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCritModifierTotals_ModifierTotal                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCritSourceModifiers        CallFunc_GetCritModifierTotals_ReturnValue                       (None)

float UInit_PlayerStat_CritChance_All_C::CalculateAttributeInitialValue(class UObject* Context, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCritModifierTotals_ModifierTotal, const struct FCritSourceModifiers& CallFunc_GetCritModifierTotals_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_PlayerStat_CritChance_All_C", "CalculateAttributeInitialValue");

	Params::UInit_PlayerStat_CritChance_All_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsOak_Player_Controller = K2Node_DynamicCast_AsOak_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCritModifierTotals_ModifierTotal = CallFunc_GetCritModifierTotals_ModifierTotal;
	Parms.CallFunc_GetCritModifierTotals_ReturnValue = CallFunc_GetCritModifierTotals_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


