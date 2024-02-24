#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Shaman_12.Passive_Shaman_12_C
// (None)

class UClass* UPassive_Shaman_12_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Shaman_12_C");

	return Clss;
}


// Passive_Shaman_12_C Passive_Shaman_12.Default__Passive_Shaman_12_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Shaman_12_C* UPassive_Shaman_12_C::GetDefaultObj()
{
	static class UPassive_Shaman_12_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Shaman_12_C*>(UPassive_Shaman_12_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_Shaman_12.Passive_Shaman_12_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Shaman_12_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Shaman_12_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Shaman_12.Passive_Shaman_12_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Shaman_12_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Shaman_12_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Shaman_12.Passive_Shaman_12_C.ExecuteUbergraph_Passive_Shaman_12
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier(NoDestructor, ContainsInstancedReference)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1(NoDestructor, ContainsInstancedReference)

void UPassive_Shaman_12_C::ExecuteUbergraph_Passive_Shaman_12(int32 EntryPoint, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Shaman_12_C", "ExecuteUbergraph_Passive_Shaman_12");

	Params::UPassive_Shaman_12_C_ExecuteUbergraph_Passive_Shaman_12_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1;

	UObject::ProcessEvent(Func, &Parms);

}

}


