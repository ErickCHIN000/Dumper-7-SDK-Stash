#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_KineticFriction_Health.Ability_KineticFriction_Health_C
// (None)

class UClass* UAbility_KineticFriction_Health_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_KineticFriction_Health_C");

	return Clss;
}


// Ability_KineticFriction_Health_C Ability_KineticFriction_Health.Default__Ability_KineticFriction_Health_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_KineticFriction_Health_C* UAbility_KineticFriction_Health_C::GetDefaultObj()
{
	static class UAbility_KineticFriction_Health_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_KineticFriction_Health_C*>(UAbility_KineticFriction_Health_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_KineticFriction_Health.Ability_KineticFriction_Health_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_KineticFriction_Health_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_KineticFriction_Health_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_KineticFriction_Health.Ability_KineticFriction_Health_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_KineticFriction_Health_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_KineticFriction_Health_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_KineticFriction_Health.Ability_KineticFriction_Health_C.Event_StartSliding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_KineticFriction_Health_C::Event_StartSliding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_KineticFriction_Health_C", "Event_StartSliding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_KineticFriction_Health.Ability_KineticFriction_Health_C.Event_StopSliding
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlideEndedDetails          Details                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAbility_KineticFriction_Health_C::Event_StopSliding(struct FSlideEndedDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_KineticFriction_Health_C", "Event_StopSliding");

	Params::UAbility_KineticFriction_Health_C_Event_StopSliding_Params Parms{};

	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_KineticFriction_Health.Ability_KineticFriction_Health_C.ExecuteUbergraph_Ability_KineticFriction_Health
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter*               K2Node_DynamicCast_AsOak_Character                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1         (NoDestructor)
// struct FSlideEndedDetails          K2Node_CustomEvent_Details                                       (ConstParm, NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec1                        (NoDestructor)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_KineticFriction_Health_C::ExecuteUbergraph_Ability_KineticFriction_Health(int32 EntryPoint, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, class AActor* CallFunc_GetAbilityOwner_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, const struct FSlideEndedDetails& K2Node_CustomEvent_Details, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec1, bool CallFunc_RemoveStatusEffect_ReturnValue, bool CallFunc_RemoveStatusEffect_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_KineticFriction_Health_C", "ExecuteUbergraph_Ability_KineticFriction_Health");

	Params::UAbility_KineticFriction_Health_C_ExecuteUbergraph_Ability_KineticFriction_Health_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Character = K2Node_DynamicCast_AsOak_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1;
	Parms.K2Node_CustomEvent_Details = K2Node_CustomEvent_Details;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec1 = K2Node_MakeStruct_StatusEffectRemoveSpec1;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue1 = CallFunc_RemoveStatusEffect_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


