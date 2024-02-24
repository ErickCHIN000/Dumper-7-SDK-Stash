#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Knight_Melee_Hammer_MeleeDmg.Ability_Knight_Melee_Hammer_MeleeDmg_C
// (None)

class UClass* UAbility_Knight_Melee_Hammer_MeleeDmg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Knight_Melee_Hammer_MeleeDmg_C");

	return Clss;
}


// Ability_Knight_Melee_Hammer_MeleeDmg_C Ability_Knight_Melee_Hammer_MeleeDmg.Default__Ability_Knight_Melee_Hammer_MeleeDmg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Knight_Melee_Hammer_MeleeDmg_C* UAbility_Knight_Melee_Hammer_MeleeDmg_C::GetDefaultObj()
{
	static class UAbility_Knight_Melee_Hammer_MeleeDmg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Knight_Melee_Hammer_MeleeDmg_C*>(UAbility_Knight_Melee_Hammer_MeleeDmg_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Knight_Melee_Hammer_MeleeDmg.Ability_Knight_Melee_Hammer_MeleeDmg_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec        Spec                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FOakAbilityTimerResult      Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAbility_Knight_Melee_Hammer_MeleeDmg_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Knight_Melee_Hammer_MeleeDmg_C", "OnAbilityTimerEnded");

	Params::UAbility_Knight_Melee_Hammer_MeleeDmg_C_OnAbilityTimerEnded_Params Parms{};

	Parms.Spec = Spec;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Knight_Melee_Hammer_MeleeDmg.Ability_Knight_Melee_Hammer_MeleeDmg_C.Enchantment_ActionSkillEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       ActionSkill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Knight_Melee_Hammer_MeleeDmg_C::Enchantment_ActionSkillEnded(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Knight_Melee_Hammer_MeleeDmg_C", "Enchantment_ActionSkillEnded");

	Params::UAbility_Knight_Melee_Hammer_MeleeDmg_C_Enchantment_ActionSkillEnded_Params Parms{};

	Parms.ActionAbility = ActionAbility;
	Parms.ActionSkill = ActionSkill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Knight_Melee_Hammer_MeleeDmg.Ability_Knight_Melee_Hammer_MeleeDmg_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Knight_Melee_Hammer_MeleeDmg_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Knight_Melee_Hammer_MeleeDmg_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Knight_Melee_Hammer_MeleeDmg.Ability_Knight_Melee_Hammer_MeleeDmg_C.ExecuteUbergraph_Ability_Knight_Melee_Hammer_MeleeDmg
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle                           (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOakAbilityTimerSpec        K2Node_MakeStruct_OakAbilityTimerSpec                            (NoDestructor)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier(NoDestructor, ContainsInstancedReference)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1(NoDestructor, ContainsInstancedReference)
// struct FOakAbilityTimerSpec        K2Node_Event_Spec                                                (ConstParm, NoDestructor)
// struct FOakAbilityTimerResult      K2Node_Event_Result                                              (ConstParm, NoDestructor)
// class UOakActionAbility*           K2Node_Event_ActionAbility                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       K2Node_Event_ActionSkill                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_Knight_Melee_Hammer_MeleeDmg_C::ExecuteUbergraph_Ability_Knight_Melee_Hammer_MeleeDmg(int32 EntryPoint, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, class UOakActionAbility* K2Node_Event_ActionAbility, enum class Enum_ActionSkills K2Node_Event_ActionSkill, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Knight_Melee_Hammer_MeleeDmg_C", "ExecuteUbergraph_Ability_Knight_Melee_Hammer_MeleeDmg");

	Params::UAbility_Knight_Melee_Hammer_MeleeDmg_C_ExecuteUbergraph_Ability_Knight_Melee_Hammer_MeleeDmg_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_DataTableValueHandle = K2Node_MakeStruct_DataTableValueHandle;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_MakeStruct_OakAbilityTimerSpec = K2Node_MakeStruct_OakAbilityTimerSpec;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1;
	Parms.K2Node_Event_Spec = K2Node_Event_Spec;
	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.K2Node_Event_ActionAbility = K2Node_Event_ActionAbility;
	Parms.K2Node_Event_ActionSkill = K2Node_Event_ActionSkill;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


