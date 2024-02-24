#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Spell_SpellCast_CritChance.Ability_All_Spell_SpellCast_CritChance_C
// (None)

class UClass* UAbility_All_Spell_SpellCast_CritChance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Spell_SpellCast_CritChance_C");

	return Clss;
}


// Ability_All_Spell_SpellCast_CritChance_C Ability_All_Spell_SpellCast_CritChance.Default__Ability_All_Spell_SpellCast_CritChance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Spell_SpellCast_CritChance_C* UAbility_All_Spell_SpellCast_CritChance_C::GetDefaultObj()
{
	static class UAbility_All_Spell_SpellCast_CritChance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Spell_SpellCast_CritChance_C*>(UAbility_All_Spell_SpellCast_CritChance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_All_Spell_SpellCast_CritChance.Ability_All_Spell_SpellCast_CritChance_C.Enchantment_OnSpellCast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGrenadeMod*                 GrenadeMod                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        EquippedPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_All_Spell_SpellCast_CritChance_C::Enchantment_OnSpellCast(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Spell_SpellCast_CritChance_C", "Enchantment_OnSpellCast");

	Params::UAbility_All_Spell_SpellCast_CritChance_C_Enchantment_OnSpellCast_Params Parms{};

	Parms.GrenadeMod = GrenadeMod;
	Parms.EquippedPlayer = EquippedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_All_Spell_SpellCast_CritChance.Ability_All_Spell_SpellCast_CritChance_C.ExecuteUbergraph_Ability_All_Spell_SpellCast_CritChance
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle                           (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 K2Node_Event_GrenadeMod                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_Event_EquippedPlayer                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UAbility_All_Spell_SpellCast_CritChance_C::ExecuteUbergraph_Ability_All_Spell_SpellCast_CritChance(int32 EntryPoint, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class AGrenadeMod* K2Node_Event_GrenadeMod, class AOakCharacter_Player* K2Node_Event_EquippedPlayer, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Spell_SpellCast_CritChance_C", "ExecuteUbergraph_Ability_All_Spell_SpellCast_CritChance");

	Params::UAbility_All_Spell_SpellCast_CritChance_C_ExecuteUbergraph_Ability_All_Spell_SpellCast_CritChance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_DataTableValueHandle = K2Node_MakeStruct_DataTableValueHandle;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_Event_GrenadeMod = K2Node_Event_GrenadeMod;
	Parms.K2Node_Event_EquippedPlayer = K2Node_Event_EquippedPlayer;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


