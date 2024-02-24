#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Ring_Cond_SkillCooldown.Ability_Ring_Cond_SkillCooldown_C
// (None)

class UClass* UAbility_Ring_Cond_SkillCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Ring_Cond_SkillCooldown_C");

	return Clss;
}


// Ability_Ring_Cond_SkillCooldown_C Ability_Ring_Cond_SkillCooldown.Default__Ability_Ring_Cond_SkillCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Ring_Cond_SkillCooldown_C* UAbility_Ring_Cond_SkillCooldown_C::GetDefaultObj()
{
	static class UAbility_Ring_Cond_SkillCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Ring_Cond_SkillCooldown_C*>(UAbility_Ring_Cond_SkillCooldown_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Ring_Cond_SkillCooldown.Ability_Ring_Cond_SkillCooldown_C.CE_ActionSkillCoolingDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Ring_Cond_SkillCooldown_C::CE_ActionSkillCoolingDown(class UOakActionAbility* ActionAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_SkillCooldown_C", "CE_ActionSkillCoolingDown");

	Params::UAbility_Ring_Cond_SkillCooldown_C_CE_ActionSkillCoolingDown_Params Parms{};

	Parms.ActionAbility = ActionAbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Ring_Cond_SkillCooldown.Ability_Ring_Cond_SkillCooldown_C.CE_ActionSkillReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Ring_Cond_SkillCooldown_C::CE_ActionSkillReady(class UOakActionAbility* ActionAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_SkillCooldown_C", "CE_ActionSkillReady");

	Params::UAbility_Ring_Cond_SkillCooldown_C_CE_ActionSkillReady_Params Parms{};

	Parms.ActionAbility = ActionAbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Ring_Cond_SkillCooldown.Ability_Ring_Cond_SkillCooldown_C.RingCond_ActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Ring_Cond_SkillCooldown_C::RingCond_ActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_SkillCooldown_C", "RingCond_ActionSkillActivated");

	Params::UAbility_Ring_Cond_SkillCooldown_C_RingCond_ActionSkillActivated_Params Parms{};

	Parms.ActionAbility = ActionAbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Ring_Cond_SkillCooldown.Ability_Ring_Cond_SkillCooldown_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Ring_Cond_SkillCooldown_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_SkillCooldown_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ring_Cond_SkillCooldown.Ability_Ring_Cond_SkillCooldown_C.ExecuteUbergraph_Ability_Ring_Cond_SkillCooldown
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakActionAbility*           K2Node_CustomEvent_ActionAbility2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityManagerComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UOakActionAbility*           K2Node_CustomEvent_ActionAbility1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1         (NoDestructor)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakActionAbility*           K2Node_CustomEvent_ActionAbility                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2         (NoDestructor)
// class UOakPlayerAbilityManagerComponent*CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbility*           CallFunc_GetSlotAbility_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_Ring_Cond_SkillCooldown_C::ExecuteUbergraph_Ability_Ring_Cond_SkillCooldown(int32 EntryPoint, class UOakActionAbility* K2Node_CustomEvent_ActionAbility2, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UOakActionAbility* K2Node_CustomEvent_ActionAbility1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, bool CallFunc_RemoveStatusEffect_ReturnValue, class UOakActionAbility* K2Node_CustomEvent_ActionAbility, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue1, class UOakPlayerAbility* CallFunc_GetSlotAbility_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_SkillCooldown_C", "ExecuteUbergraph_Ability_Ring_Cond_SkillCooldown");

	Params::UAbility_Ring_Cond_SkillCooldown_C_ExecuteUbergraph_Ability_Ring_Cond_SkillCooldown_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ActionAbility2 = K2Node_CustomEvent_ActionAbility2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_ActionAbility1 = K2Node_CustomEvent_ActionAbility1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.K2Node_CustomEvent_ActionAbility = K2Node_CustomEvent_ActionAbility;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_GetSlotAbility_ReturnValue = CallFunc_GetSlotAbility_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


