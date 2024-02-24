#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Bladesinger_ActionSkill.Ability_Bladesinger_ActionSkill_C
// (None)

class UClass* UAbility_Bladesinger_ActionSkill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Bladesinger_ActionSkill_C");

	return Clss;
}


// Ability_Bladesinger_ActionSkill_C Ability_Bladesinger_ActionSkill.Default__Ability_Bladesinger_ActionSkill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Bladesinger_ActionSkill_C* UAbility_Bladesinger_ActionSkill_C::GetDefaultObj()
{
	static class UAbility_Bladesinger_ActionSkill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Bladesinger_ActionSkill_C*>(UAbility_Bladesinger_ActionSkill_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Bladesinger_ActionSkill.Ability_Bladesinger_ActionSkill_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Bladesinger_ActionSkill_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Bladesinger_ActionSkill_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Bladesinger_ActionSkill.Ability_Bladesinger_ActionSkill_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Bladesinger_ActionSkill_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Bladesinger_ActionSkill_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Bladesinger_ActionSkill.Ability_Bladesinger_ActionSkill_C.ExecuteUbergraph_Ability_Bladesinger_ActionSkill
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UAbility_Bladesinger_ActionSkill_C::ExecuteUbergraph_Ability_Bladesinger_ActionSkill(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Bladesinger_ActionSkill_C", "ExecuteUbergraph_Ability_Bladesinger_ActionSkill");

	Params::UAbility_Bladesinger_ActionSkill_C_ExecuteUbergraph_Ability_Bladesinger_ActionSkill_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.CallFunc_GetAbilityOwner_ReturnValue1 = CallFunc_GetAbilityOwner_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


