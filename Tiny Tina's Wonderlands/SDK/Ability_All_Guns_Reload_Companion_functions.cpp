#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Guns_Reload_Companion.Ability_All_Guns_Reload_Companion_C
// (None)

class UClass* UAbility_All_Guns_Reload_Companion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Guns_Reload_Companion_C");

	return Clss;
}


// Ability_All_Guns_Reload_Companion_C Ability_All_Guns_Reload_Companion.Default__Ability_All_Guns_Reload_Companion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Guns_Reload_Companion_C* UAbility_All_Guns_Reload_Companion_C::GetDefaultObj()
{
	static class UAbility_All_Guns_Reload_Companion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Guns_Reload_Companion_C*>(UAbility_All_Guns_Reload_Companion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_All_Guns_Reload_Companion.Ability_All_Guns_Reload_Companion_C.Enchantment_OnReload
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     EventWeapon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCompleted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoGiven                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_All_Guns_Reload_Companion_C::Enchantment_OnReload(class AWeapon* EventWeapon, bool bCompleted, bool bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Guns_Reload_Companion_C", "Enchantment_OnReload");

	Params::UAbility_All_Guns_Reload_Companion_C_Enchantment_OnReload_Params Parms{};

	Parms.EventWeapon = EventWeapon;
	Parms.bCompleted = bCompleted;
	Parms.bAmmoGiven = bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_All_Guns_Reload_Companion.Ability_All_Guns_Reload_Companion_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_All_Guns_Reload_Companion_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Guns_Reload_Companion_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_All_Guns_Reload_Companion.Ability_All_Guns_Reload_Companion_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_All_Guns_Reload_Companion_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Guns_Reload_Companion_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_All_Guns_Reload_Companion.Ability_All_Guns_Reload_Companion_C.ExecuteUbergraph_Ability_All_Guns_Reload_Companion
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     K2Node_Event_EventWeapon                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCompleted                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAmmoGiven                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOakAbilityTimerSpec        K2Node_MakeStruct_OakAbilityTimerSpec                            (NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UAbility_All_Guns_Reload_Companion_C::ExecuteUbergraph_Ability_All_Guns_Reload_Companion(int32 EntryPoint, class AWeapon* K2Node_Event_EventWeapon, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Guns_Reload_Companion_C", "ExecuteUbergraph_Ability_All_Guns_Reload_Companion");

	Params::UAbility_All_Guns_Reload_Companion_C_ExecuteUbergraph_Ability_All_Guns_Reload_Companion_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventWeapon = K2Node_Event_EventWeapon;
	Parms.K2Node_Event_bCompleted = K2Node_Event_bCompleted;
	Parms.K2Node_Event_bAmmoGiven = K2Node_Event_bAmmoGiven;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_MakeStruct_OakAbilityTimerSpec = K2Node_MakeStruct_OakAbilityTimerSpec;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


