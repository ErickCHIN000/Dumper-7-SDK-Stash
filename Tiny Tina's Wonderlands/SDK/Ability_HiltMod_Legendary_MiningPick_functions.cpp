#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_HiltMod_Legendary_MiningPick.Ability_HiltMod_Legendary_MiningPick_C
// (None)

class UClass* UAbility_HiltMod_Legendary_MiningPick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_HiltMod_Legendary_MiningPick_C");

	return Clss;
}


// Ability_HiltMod_Legendary_MiningPick_C Ability_HiltMod_Legendary_MiningPick.Default__Ability_HiltMod_Legendary_MiningPick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_HiltMod_Legendary_MiningPick_C* UAbility_HiltMod_Legendary_MiningPick_C::GetDefaultObj()
{
	static class UAbility_HiltMod_Legendary_MiningPick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_HiltMod_Legendary_MiningPick_C*>(UAbility_HiltMod_Legendary_MiningPick_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_HiltMod_Legendary_MiningPick.Ability_HiltMod_Legendary_MiningPick_C.DoHiltMod_Hit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UAbility_HiltMod_Legendary_MiningPick_C::DoHiltMod_Hit(class UGbxDamageType* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_HiltMod_Legendary_MiningPick_C", "DoHiltMod_Hit");

	Params::UAbility_HiltMod_Legendary_MiningPick_C_DoHiltMod_Hit_Params Parms{};

	Parms.DamageType = DamageType;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_HiltMod_Legendary_MiningPick.Ability_HiltMod_Legendary_MiningPick_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_HiltMod_Legendary_MiningPick_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_HiltMod_Legendary_MiningPick_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_HiltMod_Legendary_MiningPick.Ability_HiltMod_Legendary_MiningPick_C.CE_InvPickup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PickedUpActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_HiltMod_Legendary_MiningPick_C::CE_InvPickup(class AActor* PickedUpActor, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_HiltMod_Legendary_MiningPick_C", "CE_InvPickup");

	Params::UAbility_HiltMod_Legendary_MiningPick_C_CE_InvPickup_Params Parms{};

	Parms.PickedUpActor = PickedUpActor;
	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_HiltMod_Legendary_MiningPick.Ability_HiltMod_Legendary_MiningPick_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_HiltMod_Legendary_MiningPick_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_HiltMod_Legendary_MiningPick_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_HiltMod_Legendary_MiningPick.Ability_HiltMod_Legendary_MiningPick_C.ExecuteUbergraph_Ability_HiltMod_Legendary_MiningPick
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnDroppedPickupLootRequestK2Node_MakeStruct_SpawnDroppedPickupLootRequest                  (ContainsInstancedReference)
// class UGbxDamageType*              K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamagedActor                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_Event_Details                                             (ContainsInstancedReference)
// int32                              CallFunc_SpawnLootAsync_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_PickedUpActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Quantity                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1         (NoDestructor)

void UAbility_HiltMod_Legendary_MiningPick_C::ExecuteUbergraph_Ability_HiltMod_Legendary_MiningPick(int32 EntryPoint, const struct FSpawnDroppedPickupLootRequest& K2Node_MakeStruct_SpawnDroppedPickupLootRequest, class UGbxDamageType* K2Node_Event_DamageType, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, int32 CallFunc_SpawnLootAsync_ReturnValue, class AActor* K2Node_CustomEvent_PickedUpActor, int32 K2Node_CustomEvent_Quantity, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_HiltMod_Legendary_MiningPick_C", "ExecuteUbergraph_Ability_HiltMod_Legendary_MiningPick");

	Params::UAbility_HiltMod_Legendary_MiningPick_C_ExecuteUbergraph_Ability_HiltMod_Legendary_MiningPick_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SpawnDroppedPickupLootRequest = K2Node_MakeStruct_SpawnDroppedPickupLootRequest;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_DamagedActor = K2Node_Event_DamagedActor;
	Parms.K2Node_Event_Details = K2Node_Event_Details;
	Parms.CallFunc_SpawnLootAsync_ReturnValue = CallFunc_SpawnLootAsync_ReturnValue;
	Parms.K2Node_CustomEvent_PickedUpActor = K2Node_CustomEvent_PickedUpActor;
	Parms.K2Node_CustomEvent_Quantity = K2Node_CustomEvent_Quantity;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}

}


