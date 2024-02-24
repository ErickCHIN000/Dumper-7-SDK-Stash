#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Barb_Shield_Whirlwind_DamageSpeed.Ability_Barb_Shield_Whirlwind_DamageSpeed_C
// (None)

class UClass* UAbility_Barb_Shield_Whirlwind_DamageSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Barb_Shield_Whirlwind_DamageSpeed_C");

	return Clss;
}


// Ability_Barb_Shield_Whirlwind_DamageSpeed_C Ability_Barb_Shield_Whirlwind_DamageSpeed.Default__Ability_Barb_Shield_Whirlwind_DamageSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Barb_Shield_Whirlwind_DamageSpeed_C* UAbility_Barb_Shield_Whirlwind_DamageSpeed_C::GetDefaultObj()
{
	static class UAbility_Barb_Shield_Whirlwind_DamageSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Barb_Shield_Whirlwind_DamageSpeed_C*>(UAbility_Barb_Shield_Whirlwind_DamageSpeed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Barb_Shield_Whirlwind_DamageSpeed.Ability_Barb_Shield_Whirlwind_DamageSpeed_C.Enchantment_ActionSkillEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       ActionSkill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Barb_Shield_Whirlwind_DamageSpeed_C::Enchantment_ActionSkillEnded(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Barb_Shield_Whirlwind_DamageSpeed_C", "Enchantment_ActionSkillEnded");

	Params::UAbility_Barb_Shield_Whirlwind_DamageSpeed_C_Enchantment_ActionSkillEnded_Params Parms{};

	Parms.ActionAbility = ActionAbility;
	Parms.ActionSkill = ActionSkill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Barb_Shield_Whirlwind_DamageSpeed.Ability_Barb_Shield_Whirlwind_DamageSpeed_C.Event_AddStack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Barb_Shield_Whirlwind_DamageSpeed_C::Event_AddStack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Barb_Shield_Whirlwind_DamageSpeed_C", "Event_AddStack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Barb_Shield_Whirlwind_DamageSpeed.Ability_Barb_Shield_Whirlwind_DamageSpeed_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec        Spec                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FOakAbilityTimerResult      Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAbility_Barb_Shield_Whirlwind_DamageSpeed_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Barb_Shield_Whirlwind_DamageSpeed_C", "OnAbilityTimerEnded");

	Params::UAbility_Barb_Shield_Whirlwind_DamageSpeed_C_OnAbilityTimerEnded_Params Parms{};

	Parms.Spec = Spec;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Barb_Shield_Whirlwind_DamageSpeed.Ability_Barb_Shield_Whirlwind_DamageSpeed_C.Enchantment_ActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       ActionSkill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Barb_Shield_Whirlwind_DamageSpeed_C::Enchantment_ActionSkillActivated(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Barb_Shield_Whirlwind_DamageSpeed_C", "Enchantment_ActionSkillActivated");

	Params::UAbility_Barb_Shield_Whirlwind_DamageSpeed_C_Enchantment_ActionSkillActivated_Params Parms{};

	Parms.ActionAbility = ActionAbility;
	Parms.ActionSkill = ActionSkill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Barb_Shield_Whirlwind_DamageSpeed.Ability_Barb_Shield_Whirlwind_DamageSpeed_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Barb_Shield_Whirlwind_DamageSpeed_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Barb_Shield_Whirlwind_DamageSpeed_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Barb_Shield_Whirlwind_DamageSpeed.Ability_Barb_Shield_Whirlwind_DamageSpeed_C.ExecuteUbergraph_Ability_Barb_Shield_Whirlwind_DamageSpeed
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle                           (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOakAbilityTimerSpec        K2Node_MakeStruct_OakAbilityTimerSpec                            (NoDestructor)
// class UOakActionAbility*           K2Node_Event_ActionAbility1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       K2Node_Event_ActionSkill1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// struct FOakAbilityTimerSpec        K2Node_Event_Spec                                                (ConstParm, NoDestructor)
// struct FOakAbilityTimerResult      K2Node_Event_Result                                              (ConstParm, NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// class UOakActionAbility*           K2Node_Event_ActionAbility                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       K2Node_Event_ActionSkill                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec1                        (NoDestructor)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec1                              (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue1                            (NoDestructor, ContainsInstancedReference)

void UAbility_Barb_Shield_Whirlwind_DamageSpeed_C::ExecuteUbergraph_Ability_Barb_Shield_Whirlwind_DamageSpeed(int32 EntryPoint, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, class UOakActionAbility* K2Node_Event_ActionAbility1, enum class Enum_ActionSkills K2Node_Event_ActionSkill1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, class UOakActionAbility* K2Node_Event_ActionAbility, enum class Enum_ActionSkills K2Node_Event_ActionSkill, bool CallFunc_RemoveStatusEffect_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec1, bool CallFunc_RemoveStatusEffect_ReturnValue1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Barb_Shield_Whirlwind_DamageSpeed_C", "ExecuteUbergraph_Ability_Barb_Shield_Whirlwind_DamageSpeed");

	Params::UAbility_Barb_Shield_Whirlwind_DamageSpeed_C_ExecuteUbergraph_Ability_Barb_Shield_Whirlwind_DamageSpeed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_DataTableValueHandle = K2Node_MakeStruct_DataTableValueHandle;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_MakeStruct_OakAbilityTimerSpec = K2Node_MakeStruct_OakAbilityTimerSpec;
	Parms.K2Node_Event_ActionAbility1 = K2Node_Event_ActionAbility1;
	Parms.K2Node_Event_ActionSkill1 = K2Node_Event_ActionSkill1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_Spec = K2Node_Event_Spec;
	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.K2Node_Event_ActionAbility = K2Node_Event_ActionAbility;
	Parms.K2Node_Event_ActionSkill = K2Node_Event_ActionSkill;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec1 = K2Node_MakeStruct_StatusEffectRemoveSpec1;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue1 = CallFunc_RemoveStatusEffect_ReturnValue1;
	Parms.K2Node_MakeStruct_StatusEffectSpec1 = K2Node_MakeStruct_StatusEffectSpec1;
	Parms.CallFunc_AddStatusEffect_ReturnValue1 = CallFunc_AddStatusEffect_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


