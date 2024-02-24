#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Rogue_10.Passive_Rogue_10_C
// (None)

class UClass* UPassive_Rogue_10_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Rogue_10_C");

	return Clss;
}


// Passive_Rogue_10_C Passive_Rogue_10.Default__Passive_Rogue_10_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Rogue_10_C* UPassive_Rogue_10_C::GetDefaultObj()
{
	static class UPassive_Rogue_10_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Rogue_10_C*>(UPassive_Rogue_10_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_Rogue_10.Passive_Rogue_10_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Rogue_10_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Rogue_10_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Rogue_10.Passive_Rogue_10_C.OakPassiveOnCastSpell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGrenadeMod*                 SpellMod                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        EquippedPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassive_Rogue_10_C::OakPassiveOnCastSpell(class AGrenadeMod* SpellMod, class AOakCharacter_Player* EquippedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Rogue_10_C", "OakPassiveOnCastSpell");

	Params::UPassive_Rogue_10_C_OakPassiveOnCastSpell_Params Parms{};

	Parms.SpellMod = SpellMod;
	Parms.EquippedPlayer = EquippedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Passive_Rogue_10.Passive_Rogue_10_C.ExecuteUbergraph_Passive_Rogue_10
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 K2Node_Event_SpellMod                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_Event_EquippedPlayer                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UPassive_Rogue_10_C::ExecuteUbergraph_Passive_Rogue_10(int32 EntryPoint, class AGrenadeMod* K2Node_Event_SpellMod, class AOakCharacter_Player* K2Node_Event_EquippedPlayer, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Rogue_10_C", "ExecuteUbergraph_Passive_Rogue_10");

	Params::UPassive_Rogue_10_C_ExecuteUbergraph_Passive_Rogue_10_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_SpellMod = K2Node_Event_SpellMod;
	Parms.K2Node_Event_EquippedPlayer = K2Node_Event_EquippedPlayer;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


