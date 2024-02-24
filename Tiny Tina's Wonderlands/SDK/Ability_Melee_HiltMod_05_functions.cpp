#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Melee_HiltMod_05.Ability_Melee_HiltMod_05_C
// (None)

class UClass* UAbility_Melee_HiltMod_05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Melee_HiltMod_05_C");

	return Clss;
}


// Ability_Melee_HiltMod_05_C Ability_Melee_HiltMod_05.Default__Ability_Melee_HiltMod_05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Melee_HiltMod_05_C* UAbility_Melee_HiltMod_05_C::GetDefaultObj()
{
	static class UAbility_Melee_HiltMod_05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Melee_HiltMod_05_C*>(UAbility_Melee_HiltMod_05_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Melee_HiltMod_05.Ability_Melee_HiltMod_05_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Melee_HiltMod_05_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_05_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Melee_HiltMod_05.Ability_Melee_HiltMod_05_C.DoHiltMod_Hit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UAbility_Melee_HiltMod_05_C::DoHiltMod_Hit(class UGbxDamageType* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_05_C", "DoHiltMod_Hit");

	Params::UAbility_Melee_HiltMod_05_C_DoHiltMod_Hit_Params Parms{};

	Parms.DamageType = DamageType;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Melee_HiltMod_05.Ability_Melee_HiltMod_05_C.ExecuteUbergraph_Ability_Melee_HiltMod_05
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamagedActor                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_Event_Details                                             (ContainsInstancedReference)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UAbility_Melee_HiltMod_05_C::ExecuteUbergraph_Ability_Melee_HiltMod_05(int32 EntryPoint, class UGbxDamageType* K2Node_Event_DamageType, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_HiltMod_05_C", "ExecuteUbergraph_Ability_Melee_HiltMod_05");

	Params::UAbility_Melee_HiltMod_05_C_ExecuteUbergraph_Ability_Melee_HiltMod_05_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_DamagedActor = K2Node_Event_DamagedActor;
	Parms.K2Node_Event_Details = K2Node_Event_Details;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


