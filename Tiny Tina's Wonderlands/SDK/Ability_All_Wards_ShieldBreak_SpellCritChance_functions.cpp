#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Wards_ShieldBreak_SpellCritChance.Ability_All_Wards_ShieldBreak_SpellCritChance_C
// (None)

class UClass* UAbility_All_Wards_ShieldBreak_SpellCritChance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Wards_ShieldBreak_SpellCritChance_C");

	return Clss;
}


// Ability_All_Wards_ShieldBreak_SpellCritChance_C Ability_All_Wards_ShieldBreak_SpellCritChance.Default__Ability_All_Wards_ShieldBreak_SpellCritChance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Wards_ShieldBreak_SpellCritChance_C* UAbility_All_Wards_ShieldBreak_SpellCritChance_C::GetDefaultObj()
{
	static class UAbility_All_Wards_ShieldBreak_SpellCritChance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Wards_ShieldBreak_SpellCritChance_C*>(UAbility_All_Wards_ShieldBreak_SpellCritChance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_All_Wards_ShieldBreak_SpellCritChance.Ability_All_Wards_ShieldBreak_SpellCritChance_C.Enchantment_Shield_NowDepleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

void UAbility_All_Wards_ShieldBreak_SpellCritChance_C::Enchantment_Shield_NowDepleted(const struct FGameResourcePoolReference& ResourcePool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Wards_ShieldBreak_SpellCritChance_C", "Enchantment_Shield_NowDepleted");

	Params::UAbility_All_Wards_ShieldBreak_SpellCritChance_C_Enchantment_Shield_NowDepleted_Params Parms{};

	Parms.ResourcePool = ResourcePool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_All_Wards_ShieldBreak_SpellCritChance.Ability_All_Wards_ShieldBreak_SpellCritChance_C.Enchantment_Shield_Filled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

void UAbility_All_Wards_ShieldBreak_SpellCritChance_C::Enchantment_Shield_Filled(const struct FGameResourcePoolReference& ResourcePool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Wards_ShieldBreak_SpellCritChance_C", "Enchantment_Shield_Filled");

	Params::UAbility_All_Wards_ShieldBreak_SpellCritChance_C_Enchantment_Shield_Filled_Params Parms{};

	Parms.ResourcePool = ResourcePool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_All_Wards_ShieldBreak_SpellCritChance.Ability_All_Wards_ShieldBreak_SpellCritChance_C.ExecuteUbergraph_Ability_All_Wards_ShieldBreak_SpellCritChance
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameResourcePoolReference  K2Node_Event_ResourcePool1                                       (NoDestructor, ContainsInstancedReference)
// struct FGameResourcePoolReference  K2Node_Event_ResourcePool                                        (NoDestructor, ContainsInstancedReference)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle                           (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UAbility_All_Wards_ShieldBreak_SpellCritChance_C::ExecuteUbergraph_Ability_All_Wards_ShieldBreak_SpellCritChance(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FGameResourcePoolReference& K2Node_Event_ResourcePool1, const struct FGameResourcePoolReference& K2Node_Event_ResourcePool, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Wards_ShieldBreak_SpellCritChance_C", "ExecuteUbergraph_Ability_All_Wards_ShieldBreak_SpellCritChance");

	Params::UAbility_All_Wards_ShieldBreak_SpellCritChance_C_ExecuteUbergraph_Ability_All_Wards_ShieldBreak_SpellCritChance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_ResourcePool1 = K2Node_Event_ResourcePool1;
	Parms.K2Node_Event_ResourcePool = K2Node_Event_ResourcePool;
	Parms.K2Node_MakeStruct_DataTableValueHandle = K2Node_MakeStruct_DataTableValueHandle;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


