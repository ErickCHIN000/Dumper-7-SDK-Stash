#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_MagicSMG_Poison_WhiteRider.Ability_MagicSMG_Poison_WhiteRider_C
// (None)

class UClass* UAbility_MagicSMG_Poison_WhiteRider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_MagicSMG_Poison_WhiteRider_C");

	return Clss;
}


// Ability_MagicSMG_Poison_WhiteRider_C Ability_MagicSMG_Poison_WhiteRider.Default__Ability_MagicSMG_Poison_WhiteRider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_MagicSMG_Poison_WhiteRider_C* UAbility_MagicSMG_Poison_WhiteRider_C::GetDefaultObj()
{
	static class UAbility_MagicSMG_Poison_WhiteRider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_MagicSMG_Poison_WhiteRider_C*>(UAbility_MagicSMG_Poison_WhiteRider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_MagicSMG_Poison_WhiteRider.Ability_MagicSMG_Poison_WhiteRider_C.CalculateAbilityState
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EGbxAbilityState        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxAbilityState        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     CallFunc_GetWeapon_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxAbilityState        CallFunc_CalculateAbilityState_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxAbilityState        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EGbxAbilityState UAbility_MagicSMG_Poison_WhiteRider_C::CalculateAbilityState(uint8 Temp_byte_Variable, enum class EGbxAbilityState Temp_byte_Variable1, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AWeapon* CallFunc_GetWeapon_ReturnValue, enum class EGbxAbilityState CallFunc_CalculateAbilityState_ReturnValue, enum class EGbxAbilityState K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_MagicSMG_Poison_WhiteRider_C", "CalculateAbilityState");

	Params::UAbility_MagicSMG_Poison_WhiteRider_C_CalculateAbilityState_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_GetWeapon_ReturnValue = CallFunc_GetWeapon_ReturnValue;
	Parms.CallFunc_CalculateAbilityState_ReturnValue = CallFunc_CalculateAbilityState_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Ability_MagicSMG_Poison_WhiteRider.Ability_MagicSMG_Poison_WhiteRider_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_MagicSMG_Poison_WhiteRider_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_MagicSMG_Poison_WhiteRider_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_MagicSMG_Poison_WhiteRider.Ability_MagicSMG_Poison_WhiteRider_C.ExecuteUbergraph_Ability_MagicSMG_Poison_WhiteRider
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_MagicSMG_Poison_WhiteRider_C::ExecuteUbergraph_Ability_MagicSMG_Poison_WhiteRider(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_MagicSMG_Poison_WhiteRider_C", "ExecuteUbergraph_Ability_MagicSMG_Poison_WhiteRider");

	Params::UAbility_MagicSMG_Poison_WhiteRider_C_ExecuteUbergraph_Ability_MagicSMG_Poison_WhiteRider_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


