#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Shaman_Melee_Plaguestorm_Poison.Ability_Shaman_Melee_Plaguestorm_Poison_C
// (None)

class UClass* UAbility_Shaman_Melee_Plaguestorm_Poison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Shaman_Melee_Plaguestorm_Poison_C");

	return Clss;
}


// Ability_Shaman_Melee_Plaguestorm_Poison_C Ability_Shaman_Melee_Plaguestorm_Poison.Default__Ability_Shaman_Melee_Plaguestorm_Poison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Shaman_Melee_Plaguestorm_Poison_C* UAbility_Shaman_Melee_Plaguestorm_Poison_C::GetDefaultObj()
{
	static class UAbility_Shaman_Melee_Plaguestorm_Poison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Shaman_Melee_Plaguestorm_Poison_C*>(UAbility_Shaman_Melee_Plaguestorm_Poison_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Shaman_Melee_Plaguestorm_Poison.Ability_Shaman_Melee_Plaguestorm_Poison_C.Enchantment_ActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       ActionSkill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Shaman_Melee_Plaguestorm_Poison_C::Enchantment_ActionSkillActivated(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Shaman_Melee_Plaguestorm_Poison_C", "Enchantment_ActionSkillActivated");

	Params::UAbility_Shaman_Melee_Plaguestorm_Poison_C_Enchantment_ActionSkillActivated_Params Parms{};

	Parms.ActionAbility = ActionAbility;
	Parms.ActionSkill = ActionSkill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Shaman_Melee_Plaguestorm_Poison.Ability_Shaman_Melee_Plaguestorm_Poison_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec        Spec                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FOakAbilityTimerResult      Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAbility_Shaman_Melee_Plaguestorm_Poison_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Shaman_Melee_Plaguestorm_Poison_C", "OnAbilityTimerEnded");

	Params::UAbility_Shaman_Melee_Plaguestorm_Poison_C_OnAbilityTimerEnded_Params Parms{};

	Parms.Spec = Spec;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Shaman_Melee_Plaguestorm_Poison.Ability_Shaman_Melee_Plaguestorm_Poison_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Shaman_Melee_Plaguestorm_Poison_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Shaman_Melee_Plaguestorm_Poison_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Shaman_Melee_Plaguestorm_Poison.Ability_Shaman_Melee_Plaguestorm_Poison_C.CleanupEnchantment
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Shaman_Melee_Plaguestorm_Poison_C::CleanupEnchantment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Shaman_Melee_Plaguestorm_Poison_C", "CleanupEnchantment");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Shaman_Melee_Plaguestorm_Poison.Ability_Shaman_Melee_Plaguestorm_Poison_C.ExecuteUbergraph_Ability_Shaman_Melee_Plaguestorm_Poison
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue                              (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue1                             (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakActionAbility*           K2Node_Event_ActionAbility                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       K2Node_Event_ActionSkill                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue2                             (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOakAbilityTimerSpec        K2Node_Event_Spec                                                (ConstParm, NoDestructor)
// struct FOakAbilityTimerResult      K2Node_Event_Result                                              (ConstParm, NoDestructor)
// struct FOakAbilityTimerSpec        K2Node_MakeStruct_OakAbilityTimerSpec                            (NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec1                              (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue1                            (NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectInstanceReferenceCallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveStatusEffectInstance_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_Shaman_Melee_Plaguestorm_Poison_C::ExecuteUbergraph_Ability_Shaman_Melee_Plaguestorm_Poison(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue1, bool CallFunc_GetDataTableValue_ReturnValue1, int32 Temp_int_Array_Index_Variable, class UOakActionAbility* K2Node_Event_ActionAbility, enum class Enum_ActionSkills K2Node_Event_ActionSkill, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue2, bool CallFunc_GetDataTableValue_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, bool K2Node_SwitchEnum_CmpSuccess, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue1, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_RemoveStatusEffectInstance_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Shaman_Melee_Plaguestorm_Poison_C", "ExecuteUbergraph_Ability_Shaman_Melee_Plaguestorm_Poison");

	Params::UAbility_Shaman_Melee_Plaguestorm_Poison_C_ExecuteUbergraph_Ability_Shaman_Melee_Plaguestorm_Poison_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetDataTableValue_OutValue = CallFunc_GetDataTableValue_OutValue;
	Parms.CallFunc_GetDataTableValue_ReturnValue = CallFunc_GetDataTableValue_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableValue_OutValue1 = CallFunc_GetDataTableValue_OutValue1;
	Parms.CallFunc_GetDataTableValue_ReturnValue1 = CallFunc_GetDataTableValue_ReturnValue1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_ActionAbility = K2Node_Event_ActionAbility;
	Parms.K2Node_Event_ActionSkill = K2Node_Event_ActionSkill;
	Parms.CallFunc_GetDataTableValue_OutValue2 = CallFunc_GetDataTableValue_OutValue2;
	Parms.CallFunc_GetDataTableValue_ReturnValue2 = CallFunc_GetDataTableValue_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_Event_Spec = K2Node_Event_Spec;
	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.K2Node_MakeStruct_OakAbilityTimerSpec = K2Node_MakeStruct_OakAbilityTimerSpec;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.K2Node_MakeStruct_StatusEffectSpec1 = K2Node_MakeStruct_StatusEffectSpec1;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.CallFunc_AddStatusEffect_ReturnValue1 = CallFunc_AddStatusEffect_ReturnValue1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RemoveStatusEffectInstance_ReturnValue = CallFunc_RemoveStatusEffectInstance_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


