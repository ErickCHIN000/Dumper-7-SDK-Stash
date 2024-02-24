#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_GunMage_Feat_SpellDamageCalc.Init_GunMage_Feat_SpellDamageCalc_C
// (None)

class UClass* UInit_GunMage_Feat_SpellDamageCalc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_GunMage_Feat_SpellDamageCalc_C");

	return Clss;
}


// Init_GunMage_Feat_SpellDamageCalc_C Init_GunMage_Feat_SpellDamageCalc.Default__Init_GunMage_Feat_SpellDamageCalc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_GunMage_Feat_SpellDamageCalc_C* UInit_GunMage_Feat_SpellDamageCalc_C::GetDefaultObj()
{
	static class UInit_GunMage_Feat_SpellDamageCalc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_GunMage_Feat_SpellDamageCalc_C*>(UInit_GunMage_Feat_SpellDamageCalc_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_GunMage_Feat_SpellDamageCalc.Init_GunMage_Feat_SpellDamageCalc_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSpellweavingStacks_Res                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSpellWeavingStacks_ClassStat                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_GunMage_Feat_SpellDamageCalc_C::CalculateAttributeInitialValue(class UObject* Context, int32 CallFunc_GetSpellweavingStacks_Res, float CallFunc_GetSpellWeavingStacks_ClassStat, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_GunMage_Feat_SpellDamageCalc_C", "CalculateAttributeInitialValue");

	Params::UInit_GunMage_Feat_SpellDamageCalc_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetSpellweavingStacks_Res = CallFunc_GetSpellweavingStacks_Res;
	Parms.CallFunc_GetSpellWeavingStacks_ClassStat = CallFunc_GetSpellWeavingStacks_ClassStat;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


