#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Mage_Spell_MageCast_GunDmgFireRt.Ability_Mage_Spell_MageCast_GunDmgFireRt_C
// (None)

class UClass* UAbility_Mage_Spell_MageCast_GunDmgFireRt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Mage_Spell_MageCast_GunDmgFireRt_C");

	return Clss;
}


// Ability_Mage_Spell_MageCast_GunDmgFireRt_C Ability_Mage_Spell_MageCast_GunDmgFireRt.Default__Ability_Mage_Spell_MageCast_GunDmgFireRt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Mage_Spell_MageCast_GunDmgFireRt_C* UAbility_Mage_Spell_MageCast_GunDmgFireRt_C::GetDefaultObj()
{
	static class UAbility_Mage_Spell_MageCast_GunDmgFireRt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Mage_Spell_MageCast_GunDmgFireRt_C*>(UAbility_Mage_Spell_MageCast_GunDmgFireRt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Mage_Spell_MageCast_GunDmgFireRt.Ability_Mage_Spell_MageCast_GunDmgFireRt_C.Enchantment_OnSpellCast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGrenadeMod*                 GrenadeMod                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        EquippedPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Mage_Spell_MageCast_GunDmgFireRt_C::Enchantment_OnSpellCast(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Mage_Spell_MageCast_GunDmgFireRt_C", "Enchantment_OnSpellCast");

	Params::UAbility_Mage_Spell_MageCast_GunDmgFireRt_C_Enchantment_OnSpellCast_Params Parms{};

	Parms.GrenadeMod = GrenadeMod;
	Parms.EquippedPlayer = EquippedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Mage_Spell_MageCast_GunDmgFireRt.Ability_Mage_Spell_MageCast_GunDmgFireRt_C.ExecuteUbergraph_Ability_Mage_Spell_MageCast_GunDmgFireRt
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle                           (NoDestructor)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPlayerClass_Res                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGrenadeMod*                 K2Node_Event_GrenadeMod                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_Event_EquippedPlayer                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UAbility_Mage_Spell_MageCast_GunDmgFireRt_C::ExecuteUbergraph_Ability_Mage_Spell_MageCast_GunDmgFireRt(int32 EntryPoint, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDataTableValueFromHandle_ReturnValue, bool CallFunc_HasPlayerClass_Res, class AGrenadeMod* K2Node_Event_GrenadeMod, class AOakCharacter_Player* K2Node_Event_EquippedPlayer, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Mage_Spell_MageCast_GunDmgFireRt_C", "ExecuteUbergraph_Ability_Mage_Spell_MageCast_GunDmgFireRt");

	Params::UAbility_Mage_Spell_MageCast_GunDmgFireRt_C_ExecuteUbergraph_Ability_Mage_Spell_MageCast_GunDmgFireRt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_DataTableValueHandle = K2Node_MakeStruct_DataTableValueHandle;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_HasPlayerClass_Res = CallFunc_HasPlayerClass_Res;
	Parms.K2Node_Event_GrenadeMod = K2Node_Event_GrenadeMod;
	Parms.K2Node_Event_EquippedPlayer = K2Node_Event_EquippedPlayer;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


