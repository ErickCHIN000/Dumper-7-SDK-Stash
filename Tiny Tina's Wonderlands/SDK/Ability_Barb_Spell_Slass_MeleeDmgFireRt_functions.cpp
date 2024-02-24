#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Barb_Spell_Slass_MeleeDmgFireRt.Ability_Barb_Spell_Slass_MeleeDmgFireRt_C
// (None)

class UClass* UAbility_Barb_Spell_Slass_MeleeDmgFireRt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Barb_Spell_Slass_MeleeDmgFireRt_C");

	return Clss;
}


// Ability_Barb_Spell_Slass_MeleeDmgFireRt_C Ability_Barb_Spell_Slass_MeleeDmgFireRt.Default__Ability_Barb_Spell_Slass_MeleeDmgFireRt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Barb_Spell_Slass_MeleeDmgFireRt_C* UAbility_Barb_Spell_Slass_MeleeDmgFireRt_C::GetDefaultObj()
{
	static class UAbility_Barb_Spell_Slass_MeleeDmgFireRt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Barb_Spell_Slass_MeleeDmgFireRt_C*>(UAbility_Barb_Spell_Slass_MeleeDmgFireRt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Barb_Spell_Slass_MeleeDmgFireRt.Ability_Barb_Spell_Slass_MeleeDmgFireRt_C.Enchantment_ActionSkillEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       ActionSkill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Barb_Spell_Slass_MeleeDmgFireRt_C::Enchantment_ActionSkillEnded(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Barb_Spell_Slass_MeleeDmgFireRt_C", "Enchantment_ActionSkillEnded");

	Params::UAbility_Barb_Spell_Slass_MeleeDmgFireRt_C_Enchantment_ActionSkillEnded_Params Parms{};

	Parms.ActionAbility = ActionAbility;
	Parms.ActionSkill = ActionSkill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Barb_Spell_Slass_MeleeDmgFireRt.Ability_Barb_Spell_Slass_MeleeDmgFireRt_C.ExecuteUbergraph_Ability_Barb_Spell_Slass_MeleeDmgFireRt
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle                           (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakActionAbility*           K2Node_Event_ActionAbility                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       K2Node_Event_ActionSkill                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UAbility_Barb_Spell_Slass_MeleeDmgFireRt_C::ExecuteUbergraph_Ability_Barb_Spell_Slass_MeleeDmgFireRt(int32 EntryPoint, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class UOakActionAbility* K2Node_Event_ActionAbility, enum class Enum_ActionSkills K2Node_Event_ActionSkill, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Barb_Spell_Slass_MeleeDmgFireRt_C", "ExecuteUbergraph_Ability_Barb_Spell_Slass_MeleeDmgFireRt");

	Params::UAbility_Barb_Spell_Slass_MeleeDmgFireRt_C_ExecuteUbergraph_Ability_Barb_Spell_Slass_MeleeDmgFireRt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_DataTableValueHandle = K2Node_MakeStruct_DataTableValueHandle;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_Event_ActionAbility = K2Node_Event_ActionAbility;
	Parms.K2Node_Event_ActionSkill = K2Node_Event_ActionSkill;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


