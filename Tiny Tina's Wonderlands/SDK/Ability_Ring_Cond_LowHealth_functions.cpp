#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Ring_Cond_LowHealth.Ability_Ring_Cond_LowHealth_C
// (None)

class UClass* UAbility_Ring_Cond_LowHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Ring_Cond_LowHealth_C");

	return Clss;
}


// Ability_Ring_Cond_LowHealth_C Ability_Ring_Cond_LowHealth.Default__Ability_Ring_Cond_LowHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Ring_Cond_LowHealth_C* UAbility_Ring_Cond_LowHealth_C::GetDefaultObj()
{
	static class UAbility_Ring_Cond_LowHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Ring_Cond_LowHealth_C*>(UAbility_Ring_Cond_LowHealth_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Ring_Cond_LowHealth.Ability_Ring_Cond_LowHealth_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Ring_Cond_LowHealth_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_LowHealth_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ring_Cond_LowHealth.Ability_Ring_Cond_LowHealth_C.CE_HeallthState_Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHealthState            HealthState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Ring_Cond_LowHealth_C::CE_HeallthState_Changed(enum class EHealthState HealthState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_LowHealth_C", "CE_HeallthState_Changed");

	Params::UAbility_Ring_Cond_LowHealth_C_CE_HeallthState_Changed_Params Parms{};

	Parms.HealthState = HealthState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Ring_Cond_LowHealth.Ability_Ring_Cond_LowHealth_C.ExecuteUbergraph_Ability_Ring_Cond_LowHealth
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// enum class EHealthState            K2Node_CustomEvent_HealthState                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)

void UAbility_Ring_Cond_LowHealth_C::ExecuteUbergraph_Ability_Ring_Cond_LowHealth(int32 EntryPoint, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, enum class EHealthState K2Node_CustomEvent_HealthState, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_LowHealth_C", "ExecuteUbergraph_Ability_Ring_Cond_LowHealth");

	Params::UAbility_Ring_Cond_LowHealth_C_ExecuteUbergraph_Ability_Ring_Cond_LowHealth_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.K2Node_CustomEvent_HealthState = K2Node_CustomEvent_HealthState;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


