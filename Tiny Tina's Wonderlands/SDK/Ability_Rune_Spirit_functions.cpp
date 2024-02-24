#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Rune_Spirit.Ability_Rune_Spirit_C
// (None)

class UClass* UAbility_Rune_Spirit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Rune_Spirit_C");

	return Clss;
}


// Ability_Rune_Spirit_C Ability_Rune_Spirit.Default__Ability_Rune_Spirit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Rune_Spirit_C* UAbility_Rune_Spirit_C::GetDefaultObj()
{
	static class UAbility_Rune_Spirit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Rune_Spirit_C*>(UAbility_Rune_Spirit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Rune_Spirit.Ability_Rune_Spirit_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Rune_Spirit_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Rune_Spirit_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Rune_Spirit.Ability_Rune_Spirit_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Rune_Spirit_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Rune_Spirit_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Rune_Spirit.Ability_Rune_Spirit_C.ExecuteUbergraph_Ability_Rune_Spirit
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier(NoDestructor, ContainsInstancedReference)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1(NoDestructor, ContainsInstancedReference)

void UAbility_Rune_Spirit_C::ExecuteUbergraph_Ability_Rune_Spirit(int32 EntryPoint, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Rune_Spirit_C", "ExecuteUbergraph_Ability_Rune_Spirit");

	Params::UAbility_Rune_Spirit_C_ExecuteUbergraph_Ability_Rune_Spirit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1;

	UObject::ProcessEvent(Func, &Parms);

}

}


