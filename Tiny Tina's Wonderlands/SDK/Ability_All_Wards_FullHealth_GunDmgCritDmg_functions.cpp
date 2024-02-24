#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Wards_FullHealth_GunDmgCritDmg.Ability_All_Wards_FullHealth_GunDmgCritDmg_C
// (None)

class UClass* UAbility_All_Wards_FullHealth_GunDmgCritDmg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Wards_FullHealth_GunDmgCritDmg_C");

	return Clss;
}


// Ability_All_Wards_FullHealth_GunDmgCritDmg_C Ability_All_Wards_FullHealth_GunDmgCritDmg.Default__Ability_All_Wards_FullHealth_GunDmgCritDmg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Wards_FullHealth_GunDmgCritDmg_C* UAbility_All_Wards_FullHealth_GunDmgCritDmg_C::GetDefaultObj()
{
	static class UAbility_All_Wards_FullHealth_GunDmgCritDmg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Wards_FullHealth_GunDmgCritDmg_C*>(UAbility_All_Wards_FullHealth_GunDmgCritDmg_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_All_Wards_FullHealth_GunDmgCritDmg.Ability_All_Wards_FullHealth_GunDmgCritDmg_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_All_Wards_FullHealth_GunDmgCritDmg_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Wards_FullHealth_GunDmgCritDmg_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_All_Wards_FullHealth_GunDmgCritDmg.Ability_All_Wards_FullHealth_GunDmgCritDmg_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_All_Wards_FullHealth_GunDmgCritDmg_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Wards_FullHealth_GunDmgCritDmg_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_All_Wards_FullHealth_GunDmgCritDmg.Ability_All_Wards_FullHealth_GunDmgCritDmg_C.ExecuteUbergraph_Ability_All_Wards_FullHealth_GunDmgCritDmg
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UAbility_All_Wards_FullHealth_GunDmgCritDmg_C::ExecuteUbergraph_Ability_All_Wards_FullHealth_GunDmgCritDmg(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Wards_FullHealth_GunDmgCritDmg_C", "ExecuteUbergraph_Ability_All_Wards_FullHealth_GunDmgCritDmg");

	Params::UAbility_All_Wards_FullHealth_GunDmgCritDmg_C_ExecuteUbergraph_Ability_All_Wards_FullHealth_GunDmgCritDmg_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.CallFunc_GetAbilityOwner_ReturnValue1 = CallFunc_GetAbilityOwner_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


