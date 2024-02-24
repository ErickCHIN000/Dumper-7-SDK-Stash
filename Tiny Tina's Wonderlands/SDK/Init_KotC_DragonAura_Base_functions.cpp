#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_KotC_DragonAura_Base.Init_KotC_DragonAura_Base_C
// (None)

class UClass* UInit_KotC_DragonAura_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_KotC_DragonAura_Base_C");

	return Clss;
}


// Init_KotC_DragonAura_Base_C Init_KotC_DragonAura_Base.Default__Init_KotC_DragonAura_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_KotC_DragonAura_Base_C* UInit_KotC_DragonAura_Base_C::GetDefaultObj()
{
	static class UInit_KotC_DragonAura_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_KotC_DragonAura_Base_C*>(UInit_KotC_DragonAura_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_KotC_DragonAura_Base.Init_KotC_DragonAura_Base_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakAbility*                 K2Node_DynamicCast_AsOak_Ability                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_CalculateAttributeInitialValue_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIFeat_KnightOfTheClaw_C>K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryToRemoveDragonAuraEffect_Res                         (ZeroConstructor, IsPlainOldData, NoDestructor)

float UInit_KotC_DragonAura_Base_C::CalculateAttributeInitialValue(class UObject* Context, class UOakAbility* K2Node_DynamicCast_AsOak_Ability, bool K2Node_DynamicCast_bSuccess, float CallFunc_CalculateAttributeInitialValue_ReturnValue, TScriptInterface<class IIFeat_KnightOfTheClaw_C> K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Greater_FloatFloat_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, bool CallFunc_TryToRemoveDragonAuraEffect_Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_KotC_DragonAura_Base_C", "CalculateAttributeInitialValue");

	Params::UInit_KotC_DragonAura_Base_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsOak_Ability = K2Node_DynamicCast_AsOak_Ability;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CalculateAttributeInitialValue_ReturnValue = CallFunc_CalculateAttributeInitialValue_ReturnValue;
	Parms.K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw = K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_TryToRemoveDragonAuraEffect_Res = CallFunc_TryToRemoveDragonAuraEffect_Res;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


