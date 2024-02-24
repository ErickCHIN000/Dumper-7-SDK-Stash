#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Wards_LowHealth_HealthRegenDmg.Ability_All_Wards_LowHealth_HealthRegenDmg_C
// (None)

class UClass* UAbility_All_Wards_LowHealth_HealthRegenDmg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Wards_LowHealth_HealthRegenDmg_C");

	return Clss;
}


// Ability_All_Wards_LowHealth_HealthRegenDmg_C Ability_All_Wards_LowHealth_HealthRegenDmg.Default__Ability_All_Wards_LowHealth_HealthRegenDmg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Wards_LowHealth_HealthRegenDmg_C* UAbility_All_Wards_LowHealth_HealthRegenDmg_C::GetDefaultObj()
{
	static class UAbility_All_Wards_LowHealth_HealthRegenDmg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Wards_LowHealth_HealthRegenDmg_C*>(UAbility_All_Wards_LowHealth_HealthRegenDmg_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_All_Wards_LowHealth_HealthRegenDmg.Ability_All_Wards_LowHealth_HealthRegenDmg_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_All_Wards_LowHealth_HealthRegenDmg_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Wards_LowHealth_HealthRegenDmg_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_All_Wards_LowHealth_HealthRegenDmg.Ability_All_Wards_LowHealth_HealthRegenDmg_C.HealthState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHealthState            HealthState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_All_Wards_LowHealth_HealthRegenDmg_C::HealthState(enum class EHealthState HealthState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Wards_LowHealth_HealthRegenDmg_C", "HealthState");

	Params::UAbility_All_Wards_LowHealth_HealthRegenDmg_C_HealthState_Params Parms{};

	Parms.HealthState = HealthState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_All_Wards_LowHealth_HealthRegenDmg.Ability_All_Wards_LowHealth_HealthRegenDmg_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_All_Wards_LowHealth_HealthRegenDmg_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Wards_LowHealth_HealthRegenDmg_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_All_Wards_LowHealth_HealthRegenDmg.Ability_All_Wards_LowHealth_HealthRegenDmg_C.ExecuteUbergraph_Ability_All_Wards_LowHealth_HealthRegenDmg
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHealthState            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHealthState            K2Node_CustomEvent_HealthState                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1         (NoDestructor)

void UAbility_All_Wards_LowHealth_HealthRegenDmg_C::ExecuteUbergraph_Ability_All_Wards_LowHealth_HealthRegenDmg(int32 EntryPoint, enum class EHealthState Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, bool CallFunc_RemoveStatusEffect_ReturnValue, enum class EHealthState K2Node_CustomEvent_HealthState, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Select_Default, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Wards_LowHealth_HealthRegenDmg_C", "ExecuteUbergraph_Ability_All_Wards_LowHealth_HealthRegenDmg");

	Params::UAbility_All_Wards_LowHealth_HealthRegenDmg_C_ExecuteUbergraph_Ability_All_Wards_LowHealth_HealthRegenDmg_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.K2Node_CustomEvent_HealthState = K2Node_CustomEvent_HealthState;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}

}


