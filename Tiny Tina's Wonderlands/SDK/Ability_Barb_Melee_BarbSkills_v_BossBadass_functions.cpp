#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Barb_Melee_BarbSkills_v_BossBadass.Ability_Barb_Melee_BarbSkills_v_BossBadass_C
// (None)

class UClass* UAbility_Barb_Melee_BarbSkills_v_BossBadass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Barb_Melee_BarbSkills_v_BossBadass_C");

	return Clss;
}


// Ability_Barb_Melee_BarbSkills_v_BossBadass_C Ability_Barb_Melee_BarbSkills_v_BossBadass.Default__Ability_Barb_Melee_BarbSkills_v_BossBadass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Barb_Melee_BarbSkills_v_BossBadass_C* UAbility_Barb_Melee_BarbSkills_v_BossBadass_C::GetDefaultObj()
{
	static class UAbility_Barb_Melee_BarbSkills_v_BossBadass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Barb_Melee_BarbSkills_v_BossBadass_C*>(UAbility_Barb_Melee_BarbSkills_v_BossBadass_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Barb_Melee_BarbSkills_v_BossBadass.Ability_Barb_Melee_BarbSkills_v_BossBadass_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Barb_Melee_BarbSkills_v_BossBadass_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Barb_Melee_BarbSkills_v_BossBadass_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Barb_Melee_BarbSkills_v_BossBadass.Ability_Barb_Melee_BarbSkills_v_BossBadass_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Barb_Melee_BarbSkills_v_BossBadass_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Barb_Melee_BarbSkills_v_BossBadass_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Barb_Melee_BarbSkills_v_BossBadass.Ability_Barb_Melee_BarbSkills_v_BossBadass_C.ExecuteUbergraph_Ability_Barb_Melee_BarbSkills_v_BossBadass
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier(NoDestructor, ContainsInstancedReference)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1(NoDestructor, ContainsInstancedReference)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UAbility_Barb_Melee_BarbSkills_v_BossBadass_C::ExecuteUbergraph_Ability_Barb_Melee_BarbSkills_v_BossBadass(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_RemoveStatusEffect_ReturnValue, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Barb_Melee_BarbSkills_v_BossBadass_C", "ExecuteUbergraph_Ability_Barb_Melee_BarbSkills_v_BossBadass");

	Params::UAbility_Barb_Melee_BarbSkills_v_BossBadass_C_ExecuteUbergraph_Ability_Barb_Melee_BarbSkills_v_BossBadass_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


