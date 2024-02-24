#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Ring_Cond_Dungeon.Ability_Ring_Cond_Dungeon_C
// (None)

class UClass* UAbility_Ring_Cond_Dungeon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Ring_Cond_Dungeon_C");

	return Clss;
}


// Ability_Ring_Cond_Dungeon_C Ability_Ring_Cond_Dungeon.Default__Ability_Ring_Cond_Dungeon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Ring_Cond_Dungeon_C* UAbility_Ring_Cond_Dungeon_C::GetDefaultObj()
{
	static class UAbility_Ring_Cond_Dungeon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Ring_Cond_Dungeon_C*>(UAbility_Ring_Cond_Dungeon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Ring_Cond_Dungeon.Ability_Ring_Cond_Dungeon_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Ring_Cond_Dungeon_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_Dungeon_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ring_Cond_Dungeon.Ability_Ring_Cond_Dungeon_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Ring_Cond_Dungeon_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_Dungeon_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ring_Cond_Dungeon.Ability_Ring_Cond_Dungeon_C.AddRingStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Ring_Cond_Dungeon_C::AddRingStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_Dungeon_C", "AddRingStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ring_Cond_Dungeon.Ability_Ring_Cond_Dungeon_C.RemoveRingStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Ring_Cond_Dungeon_C::RemoveRingStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_Dungeon_C", "RemoveRingStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ring_Cond_Dungeon.Ability_Ring_Cond_Dungeon_C.QueryEndlessDungeon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Ring_Cond_Dungeon_C::QueryEndlessDungeon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_Dungeon_C", "QueryEndlessDungeon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ring_Cond_Dungeon.Ability_Ring_Cond_Dungeon_C.ExecuteUbergraph_Ability_Ring_Cond_Dungeon
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_EvaluateCondition_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UAbility_Ring_Cond_Dungeon_C::ExecuteUbergraph_Ability_Ring_Cond_Dungeon(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, bool CallFunc_K2_EvaluateCondition_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ring_Cond_Dungeon_C", "ExecuteUbergraph_Ability_Ring_Cond_Dungeon");

	Params::UAbility_Ring_Cond_Dungeon_C_ExecuteUbergraph_Ability_Ring_Cond_Dungeon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_K2_EvaluateCondition_ReturnValue = CallFunc_K2_EvaluateCondition_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


