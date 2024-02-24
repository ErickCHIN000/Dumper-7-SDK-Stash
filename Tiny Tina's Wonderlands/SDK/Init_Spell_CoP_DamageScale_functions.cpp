#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Spell_CoP_DamageScale.Init_Spell_CoP_DamageScale_C
// (None)

class UClass* UInit_Spell_CoP_DamageScale_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Spell_CoP_DamageScale_C");

	return Clss;
}


// Init_Spell_CoP_DamageScale_C Init_Spell_CoP_DamageScale.Default__Init_Spell_CoP_DamageScale_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Spell_CoP_DamageScale_C* UInit_Spell_CoP_DamageScale_C::GetDefaultObj()
{
	static class UInit_Spell_CoP_DamageScale_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Spell_CoP_DamageScale_C*>(UInit_Spell_CoP_DamageScale_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_Spell_CoP_DamageScale.Init_Spell_CoP_DamageScale_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RarityMultiplier                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPClass_Spell_C*            K2Node_DynamicCast_AsBPClass_Spell                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSpellHavePart_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSpellHavePart_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSpellHavePart_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSpellHavePart_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSpellHavePart_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor)

float UInit_Spell_CoP_DamageScale_C::CalculateAttributeInitialValue(class UObject* Context, int32 RarityMultiplier, float CallFunc_GetValueOfAttribute_ReturnValue, class ABPClass_Spell_C* K2Node_DynamicCast_AsBPClass_Spell, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSpellHavePart_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_DoesSpellHavePart_ReturnValue1, bool CallFunc_DoesSpellHavePart_ReturnValue2, bool CallFunc_DoesSpellHavePart_ReturnValue3, bool CallFunc_DoesSpellHavePart_ReturnValue4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_Spell_CoP_DamageScale_C", "CalculateAttributeInitialValue");

	Params::UInit_Spell_CoP_DamageScale_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.RarityMultiplier = RarityMultiplier;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPClass_Spell = K2Node_DynamicCast_AsBPClass_Spell;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesSpellHavePart_ReturnValue = CallFunc_DoesSpellHavePart_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_DoesSpellHavePart_ReturnValue1 = CallFunc_DoesSpellHavePart_ReturnValue1;
	Parms.CallFunc_DoesSpellHavePart_ReturnValue2 = CallFunc_DoesSpellHavePart_ReturnValue2;
	Parms.CallFunc_DoesSpellHavePart_ReturnValue3 = CallFunc_DoesSpellHavePart_ReturnValue3;
	Parms.CallFunc_DoesSpellHavePart_ReturnValue4 = CallFunc_DoesSpellHavePart_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


