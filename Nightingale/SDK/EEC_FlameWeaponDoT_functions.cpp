#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EEC_FlameWeaponDoT.EEC_FlameWeaponDoT_C
// (None)

class UClass* UEEC_FlameWeaponDoT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EEC_FlameWeaponDoT_C");

	return Clss;
}


// EEC_FlameWeaponDoT_C EEC_FlameWeaponDoT.Default__EEC_FlameWeaponDoT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEEC_FlameWeaponDoT_C* UEEC_FlameWeaponDoT_C::GetDefaultObj()
{
	static class UEEC_FlameWeaponDoT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEEC_FlameWeaponDoT_C*>(UEEC_FlameWeaponDoT_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EEC_FlameWeaponDoT.EEC_FlameWeaponDoT_C.Execute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectCustomExecutionParametersExecutionParams                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectCustomExecutionOutputOutExecutionOutput                                               (Parm, OutParm)
// class UAbilitySystemComponent*     CallFunc_GetTargetAbilitySystemComponent_ReturnValue             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetSourceAbilitySystemComponent_ReturnValue             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ScaleSpellDamage_ScaledDamage                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEEC_FlameWeaponDoT_C::Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput, class UAbilitySystemComponent* CallFunc_GetTargetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetSourceAbilitySystemComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, double CallFunc_ScaleSpellDamage_ScaledDamage, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EEC_FlameWeaponDoT_C", "Execute");

	Params::UEEC_FlameWeaponDoT_C_Execute_Params Parms{};

	Parms.ExecutionParams = ExecutionParams;
	Parms.CallFunc_GetTargetAbilitySystemComponent_ReturnValue = CallFunc_GetTargetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetSourceAbilitySystemComponent_ReturnValue = CallFunc_GetSourceAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_ScaleSpellDamage_ScaledDamage = CallFunc_ScaleSpellDamage_ScaledDamage;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (OutExecutionOutput != nullptr)
		*OutExecutionOutput = std::move(Parms.OutExecutionOutput);

}

}


