#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Barbarian_05.Passive_Barbarian_05_C
// (None)

class UClass* UPassive_Barbarian_05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Barbarian_05_C");

	return Clss;
}


// Passive_Barbarian_05_C Passive_Barbarian_05.Default__Passive_Barbarian_05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Barbarian_05_C* UPassive_Barbarian_05_C::GetDefaultObj()
{
	static class UPassive_Barbarian_05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Barbarian_05_C*>(UPassive_Barbarian_05_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_Barbarian_05.Passive_Barbarian_05_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Barbarian_05_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Barbarian_05_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Barbarian_05.Passive_Barbarian_05_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Barbarian_05_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Barbarian_05_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Barbarian_05.Passive_Barbarian_05_C.ExecuteUbergraph_Passive_Barbarian_05
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier(NoDestructor, ContainsInstancedReference)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1(NoDestructor, ContainsInstancedReference)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier2(NoDestructor, ContainsInstancedReference)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier3(NoDestructor, ContainsInstancedReference)

void UPassive_Barbarian_05_C::ExecuteUbergraph_Passive_Barbarian_05(int32 EntryPoint, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier2, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Barbarian_05_C", "ExecuteUbergraph_Passive_Barbarian_05");

	Params::UPassive_Barbarian_05_C_ExecuteUbergraph_Passive_Barbarian_05_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier2 = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier2;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier3 = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier3;

	UObject::ProcessEvent(Func, &Parms);

}

}


