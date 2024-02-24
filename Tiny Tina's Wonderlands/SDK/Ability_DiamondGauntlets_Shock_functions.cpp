#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_DiamondGauntlets_Shock.Ability_DiamondGauntlets_Shock_C
// (None)

class UClass* UAbility_DiamondGauntlets_Shock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_DiamondGauntlets_Shock_C");

	return Clss;
}


// Ability_DiamondGauntlets_Shock_C Ability_DiamondGauntlets_Shock.Default__Ability_DiamondGauntlets_Shock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_DiamondGauntlets_Shock_C* UAbility_DiamondGauntlets_Shock_C::GetDefaultObj()
{
	static class UAbility_DiamondGauntlets_Shock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_DiamondGauntlets_Shock_C*>(UAbility_DiamondGauntlets_Shock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_DiamondGauntlets_Shock.Ability_DiamondGauntlets_Shock_C.CalculateAbilityState
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EGbxAbilityState        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class EGbxAbilityState UAbility_DiamondGauntlets_Shock_C::CalculateAbilityState(class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_DiamondGauntlets_Shock_C", "CalculateAbilityState");

	Params::UAbility_DiamondGauntlets_Shock_C_CalculateAbilityState_Params Parms{};

	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


