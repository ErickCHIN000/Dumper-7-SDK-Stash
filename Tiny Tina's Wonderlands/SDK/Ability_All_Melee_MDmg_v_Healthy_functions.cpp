#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Melee_MDmg_v_Healthy.Ability_All_Melee_MDmg_v_Healthy_C
// (None)

class UClass* UAbility_All_Melee_MDmg_v_Healthy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Melee_MDmg_v_Healthy_C");

	return Clss;
}


// Ability_All_Melee_MDmg_v_Healthy_C Ability_All_Melee_MDmg_v_Healthy.Default__Ability_All_Melee_MDmg_v_Healthy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Melee_MDmg_v_Healthy_C* UAbility_All_Melee_MDmg_v_Healthy_C::GetDefaultObj()
{
	static class UAbility_All_Melee_MDmg_v_Healthy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Melee_MDmg_v_Healthy_C*>(UAbility_All_Melee_MDmg_v_Healthy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_All_Melee_MDmg_v_Healthy.Ability_All_Melee_MDmg_v_Healthy_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_All_Melee_MDmg_v_Healthy_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Melee_MDmg_v_Healthy_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_All_Melee_MDmg_v_Healthy.Ability_All_Melee_MDmg_v_Healthy_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_All_Melee_MDmg_v_Healthy_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Melee_MDmg_v_Healthy_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_All_Melee_MDmg_v_Healthy.Ability_All_Melee_MDmg_v_Healthy_C.ExecuteUbergraph_Ability_All_Melee_MDmg_v_Healthy
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier(NoDestructor, ContainsInstancedReference)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1(NoDestructor, ContainsInstancedReference)

void UAbility_All_Melee_MDmg_v_Healthy_C::ExecuteUbergraph_Ability_All_Melee_MDmg_v_Healthy(int32 EntryPoint, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Melee_MDmg_v_Healthy_C", "ExecuteUbergraph_Ability_All_Melee_MDmg_v_Healthy");

	Params::UAbility_All_Melee_MDmg_v_Healthy_C_ExecuteUbergraph_Ability_All_Melee_MDmg_v_Healthy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1;

	UObject::ProcessEvent(Func, &Parms);

}

}

