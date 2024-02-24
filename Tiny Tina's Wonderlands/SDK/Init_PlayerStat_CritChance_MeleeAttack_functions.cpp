#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_PlayerStat_CritChance_MeleeAttack.Init_PlayerStat_CritChance_MeleeAttack_C
// (None)

class UClass* UInit_PlayerStat_CritChance_MeleeAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_PlayerStat_CritChance_MeleeAttack_C");

	return Clss;
}


// Init_PlayerStat_CritChance_MeleeAttack_C Init_PlayerStat_CritChance_MeleeAttack.Default__Init_PlayerStat_CritChance_MeleeAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_PlayerStat_CritChance_MeleeAttack_C* UInit_PlayerStat_CritChance_MeleeAttack_C::GetDefaultObj()
{
	static class UInit_PlayerStat_CritChance_MeleeAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_PlayerStat_CritChance_MeleeAttack_C*>(UInit_PlayerStat_CritChance_MeleeAttack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_PlayerStat_CritChance_MeleeAttack.Init_PlayerStat_CritChance_MeleeAttack_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakPlayerController*        K2Node_DynamicCast_AsOak_Player_Controller                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetEquippedInventoryForSlot_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCritSourceModifiers        CallFunc_FindCritModifier_ReturnValue                            (None)
// float                              CallFunc_GetValueOfAttribute_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakGbxAttributeFloat_Value                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakGbxAttributeFloat_BaseValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakGbxAttributeFloat_Value1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakGbxAttributeFloat_BaseValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakGbxAttributeFloat_Value2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakGbxAttributeFloat_BaseValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakGbxAttributeFloat_Value3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakGbxAttributeFloat_BaseValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_PlayerStat_CritChance_MeleeAttack_C::CalculateAttributeInitialValue(class UObject* Context, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, const struct FCritSourceModifiers& CallFunc_FindCritModifier_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakGbxAttributeFloat_Value, float CallFunc_BreakGbxAttributeFloat_BaseValue, float CallFunc_BreakGbxAttributeFloat_Value1, float CallFunc_BreakGbxAttributeFloat_BaseValue1, float CallFunc_BreakGbxAttributeFloat_Value2, float CallFunc_BreakGbxAttributeFloat_BaseValue2, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_BreakGbxAttributeFloat_Value3, float CallFunc_BreakGbxAttributeFloat_BaseValue3, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_PlayerStat_CritChance_MeleeAttack_C", "CalculateAttributeInitialValue");

	Params::UInit_PlayerStat_CritChance_MeleeAttack_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsOak_Player_Controller = K2Node_DynamicCast_AsOak_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEquippedInventoryForSlot_ReturnValue = CallFunc_GetEquippedInventoryForSlot_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_FindCritModifier_ReturnValue = CallFunc_FindCritModifier_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue1 = CallFunc_GetValueOfAttribute_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakGbxAttributeFloat_Value = CallFunc_BreakGbxAttributeFloat_Value;
	Parms.CallFunc_BreakGbxAttributeFloat_BaseValue = CallFunc_BreakGbxAttributeFloat_BaseValue;
	Parms.CallFunc_BreakGbxAttributeFloat_Value1 = CallFunc_BreakGbxAttributeFloat_Value1;
	Parms.CallFunc_BreakGbxAttributeFloat_BaseValue1 = CallFunc_BreakGbxAttributeFloat_BaseValue1;
	Parms.CallFunc_BreakGbxAttributeFloat_Value2 = CallFunc_BreakGbxAttributeFloat_Value2;
	Parms.CallFunc_BreakGbxAttributeFloat_BaseValue2 = CallFunc_BreakGbxAttributeFloat_BaseValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_BreakGbxAttributeFloat_Value3 = CallFunc_BreakGbxAttributeFloat_Value3;
	Parms.CallFunc_BreakGbxAttributeFloat_BaseValue3 = CallFunc_BreakGbxAttributeFloat_BaseValue3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_Add_FloatFloat_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


