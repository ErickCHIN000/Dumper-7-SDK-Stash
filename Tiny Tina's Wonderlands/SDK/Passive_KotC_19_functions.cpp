#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_KotC_19.Passive_KotC_19_C
// (None)

class UClass* UPassive_KotC_19_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_KotC_19_C");

	return Clss;
}


// Passive_KotC_19_C Passive_KotC_19.Default__Passive_KotC_19_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_KotC_19_C* UPassive_KotC_19_C::GetDefaultObj()
{
	static class UPassive_KotC_19_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_KotC_19_C*>(UPassive_KotC_19_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_KotC_19.Passive_KotC_19_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_KotC_19_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_KotC_19_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_KotC_19.Passive_KotC_19_C.ExecuteUbergraph_Passive_KotC_19
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier(NoDestructor, ContainsInstancedReference)

void UPassive_KotC_19_C::ExecuteUbergraph_Passive_KotC_19(int32 EntryPoint, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_KotC_19_C", "ExecuteUbergraph_Passive_KotC_19");

	Params::UPassive_KotC_19_C_ExecuteUbergraph_Passive_KotC_19_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier;

	UObject::ProcessEvent(Func, &Parms);

}

}

