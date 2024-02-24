#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Necromancer_13.Passive_Necromancer_13_C
// (None)

class UClass* UPassive_Necromancer_13_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Necromancer_13_C");

	return Clss;
}


// Passive_Necromancer_13_C Passive_Necromancer_13.Default__Passive_Necromancer_13_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Necromancer_13_C* UPassive_Necromancer_13_C::GetDefaultObj()
{
	static class UPassive_Necromancer_13_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Necromancer_13_C*>(UPassive_Necromancer_13_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_Necromancer_13.Passive_Necromancer_13_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Necromancer_13_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Necromancer_13_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Necromancer_13.Passive_Necromancer_13_C.OakPassiveTriggerKillSkillEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*            Damaged                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bWasAutoTrigger                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPassive_Necromancer_13_C::OakPassiveTriggerKillSkillEffect(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details, bool bWasAutoTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Necromancer_13_C", "OakPassiveTriggerKillSkillEffect");

	Params::UPassive_Necromancer_13_C_OakPassiveTriggerKillSkillEffect_Params Parms{};

	Parms.Damaged = Damaged;
	Parms.Details = Details;
	Parms.bWasAutoTrigger = bWasAutoTrigger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Passive_Necromancer_13.Passive_Necromancer_13_C.ExecuteUbergraph_Passive_Necromancer_13
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageComponent*            K2Node_Event_Damaged                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         K2Node_Event_Details                                             (None)
// bool                               K2Node_Event_bWasAutoTrigger                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UPassive_Necromancer_13_C::ExecuteUbergraph_Passive_Necromancer_13(int32 EntryPoint, class UDamageComponent* K2Node_Event_Damaged, const struct FCausedDeathDetails& K2Node_Event_Details, bool K2Node_Event_bWasAutoTrigger, class AActor* CallFunc_GetAbilityOwner_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Necromancer_13_C", "ExecuteUbergraph_Passive_Necromancer_13");

	Params::UPassive_Necromancer_13_C_ExecuteUbergraph_Passive_Necromancer_13_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Damaged = K2Node_Event_Damaged;
	Parms.K2Node_Event_Details = K2Node_Event_Details;
	Parms.K2Node_Event_bWasAutoTrigger = K2Node_Event_bWasAutoTrigger;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


