#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Rogue_Spell_BladeActive_MCrit.Ability_Rogue_Spell_BladeActive_MCrit_C
// (None)

class UClass* UAbility_Rogue_Spell_BladeActive_MCrit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Rogue_Spell_BladeActive_MCrit_C");

	return Clss;
}


// Ability_Rogue_Spell_BladeActive_MCrit_C Ability_Rogue_Spell_BladeActive_MCrit.Default__Ability_Rogue_Spell_BladeActive_MCrit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Rogue_Spell_BladeActive_MCrit_C* UAbility_Rogue_Spell_BladeActive_MCrit_C::GetDefaultObj()
{
	static class UAbility_Rogue_Spell_BladeActive_MCrit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Rogue_Spell_BladeActive_MCrit_C*>(UAbility_Rogue_Spell_BladeActive_MCrit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Rogue_Spell_BladeActive_MCrit.Ability_Rogue_Spell_BladeActive_MCrit_C.Enchantment_ActionSkillEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       ActionSkill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Rogue_Spell_BladeActive_MCrit_C::Enchantment_ActionSkillEnded(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Rogue_Spell_BladeActive_MCrit_C", "Enchantment_ActionSkillEnded");

	Params::UAbility_Rogue_Spell_BladeActive_MCrit_C_Enchantment_ActionSkillEnded_Params Parms{};

	Parms.ActionAbility = ActionAbility;
	Parms.ActionSkill = ActionSkill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Rogue_Spell_BladeActive_MCrit.Ability_Rogue_Spell_BladeActive_MCrit_C.Enchantment_ActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       ActionSkill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Rogue_Spell_BladeActive_MCrit_C::Enchantment_ActionSkillActivated(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Rogue_Spell_BladeActive_MCrit_C", "Enchantment_ActionSkillActivated");

	Params::UAbility_Rogue_Spell_BladeActive_MCrit_C_Enchantment_ActionSkillActivated_Params Parms{};

	Parms.ActionAbility = ActionAbility;
	Parms.ActionSkill = ActionSkill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Rogue_Spell_BladeActive_MCrit.Ability_Rogue_Spell_BladeActive_MCrit_C.ExecuteUbergraph_Ability_Rogue_Spell_BladeActive_MCrit
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakActionAbility*           K2Node_Event_ActionAbility1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       K2Node_Event_ActionSkill1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakActionAbility*           K2Node_Event_ActionAbility                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       K2Node_Event_ActionSkill                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UAbility_Rogue_Spell_BladeActive_MCrit_C::ExecuteUbergraph_Ability_Rogue_Spell_BladeActive_MCrit(int32 EntryPoint, class UOakActionAbility* K2Node_Event_ActionAbility1, enum class Enum_ActionSkills K2Node_Event_ActionSkill1, class UOakActionAbility* K2Node_Event_ActionAbility, enum class Enum_ActionSkills K2Node_Event_ActionSkill, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_RemoveStatusEffect_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Rogue_Spell_BladeActive_MCrit_C", "ExecuteUbergraph_Ability_Rogue_Spell_BladeActive_MCrit");

	Params::UAbility_Rogue_Spell_BladeActive_MCrit_C_ExecuteUbergraph_Ability_Rogue_Spell_BladeActive_MCrit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ActionAbility1 = K2Node_Event_ActionAbility1;
	Parms.K2Node_Event_ActionSkill1 = K2Node_Event_ActionSkill1;
	Parms.K2Node_Event_ActionAbility = K2Node_Event_ActionAbility;
	Parms.K2Node_Event_ActionSkill = K2Node_Event_ActionSkill;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


