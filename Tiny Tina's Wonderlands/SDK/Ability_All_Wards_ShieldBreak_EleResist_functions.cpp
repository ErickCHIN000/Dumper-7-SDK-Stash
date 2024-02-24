#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Wards_ShieldBreak_EleResist.Ability_All_Wards_ShieldBreak_EleResist_C
// (None)

class UClass* UAbility_All_Wards_ShieldBreak_EleResist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Wards_ShieldBreak_EleResist_C");

	return Clss;
}


// Ability_All_Wards_ShieldBreak_EleResist_C Ability_All_Wards_ShieldBreak_EleResist.Default__Ability_All_Wards_ShieldBreak_EleResist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Wards_ShieldBreak_EleResist_C* UAbility_All_Wards_ShieldBreak_EleResist_C::GetDefaultObj()
{
	static class UAbility_All_Wards_ShieldBreak_EleResist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Wards_ShieldBreak_EleResist_C*>(UAbility_All_Wards_ShieldBreak_EleResist_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_All_Wards_ShieldBreak_EleResist.Ability_All_Wards_ShieldBreak_EleResist_C.Enchantment_Shield_NowDepleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

void UAbility_All_Wards_ShieldBreak_EleResist_C::Enchantment_Shield_NowDepleted(const struct FGameResourcePoolReference& ResourcePool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Wards_ShieldBreak_EleResist_C", "Enchantment_Shield_NowDepleted");

	Params::UAbility_All_Wards_ShieldBreak_EleResist_C_Enchantment_Shield_NowDepleted_Params Parms{};

	Parms.ResourcePool = ResourcePool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_All_Wards_ShieldBreak_EleResist.Ability_All_Wards_ShieldBreak_EleResist_C.Enchantment_Shield_Filled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

void UAbility_All_Wards_ShieldBreak_EleResist_C::Enchantment_Shield_Filled(const struct FGameResourcePoolReference& ResourcePool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Wards_ShieldBreak_EleResist_C", "Enchantment_Shield_Filled");

	Params::UAbility_All_Wards_ShieldBreak_EleResist_C_Enchantment_Shield_Filled_Params Parms{};

	Parms.ResourcePool = ResourcePool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_All_Wards_ShieldBreak_EleResist.Ability_All_Wards_ShieldBreak_EleResist_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec        Spec                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FOakAbilityTimerResult      Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAbility_All_Wards_ShieldBreak_EleResist_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Wards_ShieldBreak_EleResist_C", "OnAbilityTimerEnded");

	Params::UAbility_All_Wards_ShieldBreak_EleResist_C_OnAbilityTimerEnded_Params Parms{};

	Parms.Spec = Spec;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_All_Wards_ShieldBreak_EleResist.Ability_All_Wards_ShieldBreak_EleResist_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_All_Wards_ShieldBreak_EleResist_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Wards_ShieldBreak_EleResist_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_All_Wards_ShieldBreak_EleResist.Ability_All_Wards_ShieldBreak_EleResist_C.ExecuteUbergraph_Ability_All_Wards_ShieldBreak_EleResist
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameResourcePoolReference  K2Node_Event_ResourcePool1                                       (NoDestructor, ContainsInstancedReference)
// struct FGameResourcePoolReference  K2Node_Event_ResourcePool                                        (NoDestructor, ContainsInstancedReference)
// struct FOakAbilityTimerSpec        K2Node_Event_Spec                                                (ConstParm, NoDestructor)
// struct FOakAbilityTimerResult      K2Node_Event_Result                                              (ConstParm, NoDestructor)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier(NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle                           (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOakAbilityTimerSpec        K2Node_MakeStruct_OakAbilityTimerSpec                            (NoDestructor)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1(NoDestructor, ContainsInstancedReference)

void UAbility_All_Wards_ShieldBreak_EleResist_C::ExecuteUbergraph_Ability_All_Wards_ShieldBreak_EleResist(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FGameResourcePoolReference& K2Node_Event_ResourcePool1, const struct FGameResourcePoolReference& K2Node_Event_ResourcePool, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Wards_ShieldBreak_EleResist_C", "ExecuteUbergraph_Ability_All_Wards_ShieldBreak_EleResist");

	Params::UAbility_All_Wards_ShieldBreak_EleResist_C_ExecuteUbergraph_Ability_All_Wards_ShieldBreak_EleResist_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_ResourcePool1 = K2Node_Event_ResourcePool1;
	Parms.K2Node_Event_ResourcePool = K2Node_Event_ResourcePool;
	Parms.K2Node_Event_Spec = K2Node_Event_Spec;
	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableValueHandle = K2Node_MakeStruct_DataTableValueHandle;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_MakeStruct_OakAbilityTimerSpec = K2Node_MakeStruct_OakAbilityTimerSpec;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1;

	UObject::ProcessEvent(Func, &Parms);

}

}


