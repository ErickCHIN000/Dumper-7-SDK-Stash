#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Melee_HiltMod_ShieldBash.Ability_Melee_HiltMod_ShieldBash_C
// (None)

class UClass* UAbility_Melee_HiltMod_ShieldBash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Melee_HiltMod_ShieldBash_C");

	return Clss;
}


// Ability_Melee_HiltMod_ShieldBash_C Ability_Melee_HiltMod_ShieldBash.Default__Ability_Melee_HiltMod_ShieldBash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Melee_HiltMod_ShieldBash_C* UAbility_Melee_HiltMod_ShieldBash_C::GetDefaultObj()
{
	static class UAbility_Melee_HiltMod_ShieldBash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Melee_HiltMod_ShieldBash_C*>(UAbility_Melee_HiltMod_ShieldBash_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Melee_HiltMod_ShieldBash.Ability_Melee_HiltMod_ShieldBash_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Melee_HiltMod_ShieldBash_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_ShieldBash_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Melee_HiltMod_ShieldBash.Ability_Melee_HiltMod_ShieldBash_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Melee_HiltMod_ShieldBash_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_ShieldBash_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Melee_HiltMod_ShieldBash.Ability_Melee_HiltMod_ShieldBash_C.ExecuteUbergraph_Ability_Melee_HiltMod_ShieldBash
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec1                        (NoDestructor)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec1                              (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue1                            (NoDestructor, ContainsInstancedReference)

void UAbility_Melee_HiltMod_ShieldBash_C::ExecuteUbergraph_Ability_Melee_HiltMod_ShieldBash(int32 EntryPoint, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec1, bool CallFunc_RemoveStatusEffect_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, bool CallFunc_RemoveStatusEffect_ReturnValue1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_ShieldBash_C", "ExecuteUbergraph_Ability_Melee_HiltMod_ShieldBash");

	Params::UAbility_Melee_HiltMod_ShieldBash_C_ExecuteUbergraph_Ability_Melee_HiltMod_ShieldBash_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec1 = K2Node_MakeStruct_StatusEffectRemoveSpec1;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue1 = CallFunc_RemoveStatusEffect_ReturnValue1;
	Parms.K2Node_MakeStruct_StatusEffectSpec1 = K2Node_MakeStruct_StatusEffectSpec1;
	Parms.CallFunc_AddStatusEffect_ReturnValue1 = CallFunc_AddStatusEffect_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


