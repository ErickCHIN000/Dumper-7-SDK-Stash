#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Shared_SkillEnd_SE_Duration.Ability_All_Shared_SkillEnd_SE_Duration_C
// (None)

class UClass* UAbility_All_Shared_SkillEnd_SE_Duration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Shared_SkillEnd_SE_Duration_C");

	return Clss;
}


// Ability_All_Shared_SkillEnd_SE_Duration_C Ability_All_Shared_SkillEnd_SE_Duration.Default__Ability_All_Shared_SkillEnd_SE_Duration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Shared_SkillEnd_SE_Duration_C* UAbility_All_Shared_SkillEnd_SE_Duration_C::GetDefaultObj()
{
	static class UAbility_All_Shared_SkillEnd_SE_Duration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Shared_SkillEnd_SE_Duration_C*>(UAbility_All_Shared_SkillEnd_SE_Duration_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_All_Shared_SkillEnd_SE_Duration.Ability_All_Shared_SkillEnd_SE_Duration_C.Enchantment_ActionSkillEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       ActionSkill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_All_Shared_SkillEnd_SE_Duration_C::Enchantment_ActionSkillEnded(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Shared_SkillEnd_SE_Duration_C", "Enchantment_ActionSkillEnded");

	Params::UAbility_All_Shared_SkillEnd_SE_Duration_C_Enchantment_ActionSkillEnded_Params Parms{};

	Parms.ActionAbility = ActionAbility;
	Parms.ActionSkill = ActionSkill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_All_Shared_SkillEnd_SE_Duration.Ability_All_Shared_SkillEnd_SE_Duration_C.ExecuteUbergraph_Ability_All_Shared_SkillEnd_SE_Duration
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle                           (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakActionAbility*           K2Node_Event_ActionAbility                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       K2Node_Event_ActionSkill                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UAbility_All_Shared_SkillEnd_SE_Duration_C::ExecuteUbergraph_Ability_All_Shared_SkillEnd_SE_Duration(int32 EntryPoint, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class UOakActionAbility* K2Node_Event_ActionAbility, enum class Enum_ActionSkills K2Node_Event_ActionSkill, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Shared_SkillEnd_SE_Duration_C", "ExecuteUbergraph_Ability_All_Shared_SkillEnd_SE_Duration");

	Params::UAbility_All_Shared_SkillEnd_SE_Duration_C_ExecuteUbergraph_Ability_All_Shared_SkillEnd_SE_Duration_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_DataTableValueHandle = K2Node_MakeStruct_DataTableValueHandle;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_Event_ActionAbility = K2Node_Event_ActionAbility;
	Parms.K2Node_Event_ActionSkill = K2Node_Event_ActionSkill;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


