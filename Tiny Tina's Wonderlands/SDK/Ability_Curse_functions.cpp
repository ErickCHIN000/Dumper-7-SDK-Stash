#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Curse.Ability_Curse_C
// (None)

class UClass* UAbility_Curse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Curse_C");

	return Clss;
}


// Ability_Curse_C Ability_Curse.Default__Ability_Curse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Curse_C* UAbility_Curse_C::GetDefaultObj()
{
	static class UAbility_Curse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Curse_C*>(UAbility_Curse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Curse.Ability_Curse_C.ApplyEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Curse_C::ApplyEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Curse_C", "ApplyEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Curse.Ability_Curse_C.OnAbilityTimerStarted
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec        Spec                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAbility_Curse_C::OnAbilityTimerStarted(struct FOakAbilityTimerSpec& Spec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Curse_C", "OnAbilityTimerStarted");

	Params::UAbility_Curse_C_OnAbilityTimerStarted_Params Parms{};

	Parms.Spec = Spec;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Curse.Ability_Curse_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec        Spec                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FOakAbilityTimerResult      Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAbility_Curse_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Curse_C", "OnAbilityTimerEnded");

	Params::UAbility_Curse_C_OnAbilityTimerEnded_Params Parms{};

	Parms.Spec = Spec;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Curse.Ability_Curse_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Curse_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Curse_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Curse.Ability_Curse_C.ExecuteUbergraph_Ability_Curse
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 K2Node_DynamicCast_AsGrenade_Mod                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOakCharacter*               K2Node_DynamicCast_AsOak_Character                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOakAbilityTimerSpec        K2Node_Event_Spec1                                               (ConstParm, NoDestructor)
// struct FOakAbilityTimerSpec        K2Node_Event_Spec                                                (ConstParm, NoDestructor)
// struct FOakAbilityTimerResult      K2Node_Event_Result                                              (ConstParm, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSpellDuration_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// float                              CallFunc_GetSpellDuration_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseAudioComponent*        CallFunc_GetDefaultWwiseComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue                           (None)

void UAbility_Curse_C::ExecuteUbergraph_Ability_Curse(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, class AGrenadeMod* K2Node_DynamicCast_AsGrenade_Mod, bool K2Node_DynamicCast_bSuccess, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess1, const struct FOakAbilityTimerSpec& K2Node_Event_Spec1, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue1, float CallFunc_GetSpellDuration_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, float CallFunc_GetSpellDuration_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, class UGbxAction* CallFunc_K2Play_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Curse_C", "ExecuteUbergraph_Ability_Curse");

	Params::UAbility_Curse_C_ExecuteUbergraph_Ability_Curse_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_GetAbilityOwner_ReturnValue1 = CallFunc_GetAbilityOwner_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsGrenade_Mod = K2Node_DynamicCast_AsGrenade_Mod;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsOak_Character = K2Node_DynamicCast_AsOak_Character;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_Event_Spec1 = K2Node_Event_Spec1;
	Parms.K2Node_Event_Spec = K2Node_Event_Spec;
	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_GetSpellDuration_ReturnValue = CallFunc_GetSpellDuration_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.CallFunc_GetSpellDuration_ReturnValue1 = CallFunc_GetSpellDuration_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue2 = CallFunc_GetOwner_ReturnValue2;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;
	Parms.CallFunc_GetAbilityOwner_ReturnValue2 = CallFunc_GetAbilityOwner_ReturnValue2;
	Parms.CallFunc_GetDefaultWwiseComponent_ReturnValue = CallFunc_GetDefaultWwiseComponent_ReturnValue;
	Parms.CallFunc_PostAttachedEvent_ReturnValue = CallFunc_PostAttachedEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


