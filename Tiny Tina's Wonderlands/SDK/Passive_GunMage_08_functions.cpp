#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_GunMage_08.Passive_GunMage_08_C
// (None)

class UClass* UPassive_GunMage_08_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_GunMage_08_C");

	return Clss;
}


// Passive_GunMage_08_C Passive_GunMage_08.Default__Passive_GunMage_08_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_GunMage_08_C* UPassive_GunMage_08_C::GetDefaultObj()
{
	static class UPassive_GunMage_08_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_GunMage_08_C*>(UPassive_GunMage_08_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_GunMage_08.Passive_GunMage_08_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_GunMage_08_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_GunMage_08_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_GunMage_08.Passive_GunMage_08_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_GunMage_08_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_GunMage_08_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_GunMage_08.Passive_GunMage_08_C.ExecuteUbergraph_Passive_GunMage_08
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier(NoDestructor, ContainsInstancedReference)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1(NoDestructor, ContainsInstancedReference)

void UPassive_GunMage_08_C::ExecuteUbergraph_Passive_GunMage_08(int32 EntryPoint, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_GunMage_08_C", "ExecuteUbergraph_Passive_GunMage_08");

	Params::UPassive_GunMage_08_C_ExecuteUbergraph_Passive_GunMage_08_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1;

	UObject::ProcessEvent(Func, &Parms);

}

}


