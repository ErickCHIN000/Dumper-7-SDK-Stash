#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Harbinger.Ability_Harbinger_C
// (None)

class UClass* UAbility_Harbinger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Harbinger_C");

	return Clss;
}


// Ability_Harbinger_C Ability_Harbinger.Default__Ability_Harbinger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Harbinger_C* UAbility_Harbinger_C::GetDefaultObj()
{
	static class UAbility_Harbinger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Harbinger_C*>(UAbility_Harbinger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Harbinger.Ability_Harbinger_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Harbinger_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Harbinger_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Harbinger.Ability_Harbinger_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Harbinger_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Harbinger_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Harbinger.Ability_Harbinger_C.ActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       ActionSkill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Harbinger_C::ActionSkillActivated(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Harbinger_C", "ActionSkillActivated");

	Params::UAbility_Harbinger_C_ActionSkillActivated_Params Parms{};

	Parms.ActionAbility = ActionAbility;
	Parms.ActionSkill = ActionSkill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Harbinger.Ability_Harbinger_C.ExecuteUbergraph_Ability_Harbinger
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// class UBPEventHub_PlayerCharacter_C*K2Node_DynamicCast_AsBPEvent_Hub_Player_Character                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakActionAbility*           K2Node_CustomEvent_ActionAbility                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       K2Node_CustomEvent_ActionSkill                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1         (NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UAbility_Harbinger_C::ExecuteUbergraph_Ability_Harbinger(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess1, class UOakActionAbility* K2Node_CustomEvent_ActionAbility, enum class Enum_ActionSkills K2Node_CustomEvent_ActionSkill, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Harbinger_C", "ExecuteUbergraph_Ability_Harbinger");

	Params::UAbility_Harbinger_C_ExecuteUbergraph_Ability_Harbinger_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.K2Node_DynamicCast_AsBPEvent_Hub_Player_Character = K2Node_DynamicCast_AsBPEvent_Hub_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_CustomEvent_ActionAbility = K2Node_CustomEvent_ActionAbility;
	Parms.K2Node_CustomEvent_ActionSkill = K2Node_CustomEvent_ActionSkill;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


