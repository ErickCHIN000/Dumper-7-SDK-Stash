#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Melee_Unique_SaltnBatt.Ability_Melee_Unique_SaltnBatt_C
// (None)

class UClass* UAbility_Melee_Unique_SaltnBatt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Melee_Unique_SaltnBatt_C");

	return Clss;
}


// Ability_Melee_Unique_SaltnBatt_C Ability_Melee_Unique_SaltnBatt.Default__Ability_Melee_Unique_SaltnBatt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Melee_Unique_SaltnBatt_C* UAbility_Melee_Unique_SaltnBatt_C::GetDefaultObj()
{
	static class UAbility_Melee_Unique_SaltnBatt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Melee_Unique_SaltnBatt_C*>(UAbility_Melee_Unique_SaltnBatt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Melee_Unique_SaltnBatt.Ability_Melee_Unique_SaltnBatt_C.GbxAsyncRequest_Spawned_7C8E2F3143FA40444BF9899390CFA6F8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Melee_Unique_SaltnBatt_C::GbxAsyncRequest_Spawned_7C8E2F3143FA40444BF9899390CFA6F8(class AActor* Actor, int32 InstanceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_Unique_SaltnBatt_C", "GbxAsyncRequest_Spawned_7C8E2F3143FA40444BF9899390CFA6F8");

	Params::UAbility_Melee_Unique_SaltnBatt_C_GbxAsyncRequest_Spawned_7C8E2F3143FA40444BF9899390CFA6F8_Params Parms{};

	Parms.Actor = Actor;
	Parms.InstanceIndex = InstanceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Melee_Unique_SaltnBatt.Ability_Melee_Unique_SaltnBatt_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Melee_Unique_SaltnBatt_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_Unique_SaltnBatt_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Melee_Unique_SaltnBatt.Ability_Melee_Unique_SaltnBatt_C.Caused Melee Damage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               Damage_Source                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Damaged_Target                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UAbility_Melee_Unique_SaltnBatt_C::Caused_Melee_Damage(class AActor* Instigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* Damage_Source, class AActor* Damaged_Target, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_Unique_SaltnBatt_C", "Caused Melee Damage");

	Params::UAbility_Melee_Unique_SaltnBatt_C_Caused_Melee_Damage_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.Damage_Source = Damage_Source;
	Parms.Damaged_Target = Damaged_Target;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Melee_Unique_SaltnBatt.Ability_Melee_Unique_SaltnBatt_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Melee_Unique_SaltnBatt_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_Unique_SaltnBatt_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Melee_Unique_SaltnBatt.Ability_Melee_Unique_SaltnBatt_C.ExecuteUbergraph_Ability_Melee_Unique_SaltnBatt
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AProjectile_TED_SaltNBattery_Daggerstorm_C*Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InstanceIndex                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AProjectile_TED_SaltNBattery_Daggerstorm_C*K2Node_DynamicCast_AsProjectile_TED_Salt_NBattery_Daggerstorm    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_CustomEvent_Instigator                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_CustomEvent_DamageType                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_CustomEvent_Damage_Source                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Damaged_Target                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_CustomEvent_Details                                       (ContainsInstancedReference)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGbxSpawnActorAsyncRequest  K2Node_MakeStruct_GbxSpawnActorAsyncRequest                      (ContainsInstancedReference)
// int32                              CallFunc_SpawnActorAsync_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1         (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_Melee_Unique_SaltnBatt_C::ExecuteUbergraph_Ability_Melee_Unique_SaltnBatt(int32 EntryPoint, class AProjectile_TED_SaltNBattery_Daggerstorm_C* Temp_object_Variable, class AActor* K2Node_CustomEvent_Actor, int32 K2Node_CustomEvent_InstanceIndex, class AProjectile_TED_SaltNBattery_Daggerstorm_C* K2Node_DynamicCast_AsProjectile_TED_Salt_NBattery_Daggerstorm, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_Instigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_Damage_Source, class AActor* K2Node_CustomEvent_Damaged_Target, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class UClass* CallFunc_GetObjectClass_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Melee_Unique_SaltnBatt_C", "ExecuteUbergraph_Ability_Melee_Unique_SaltnBatt");

	Params::UAbility_Melee_Unique_SaltnBatt_C_ExecuteUbergraph_Ability_Melee_Unique_SaltnBatt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_CustomEvent_InstanceIndex = K2Node_CustomEvent_InstanceIndex;
	Parms.K2Node_DynamicCast_AsProjectile_TED_Salt_NBattery_Daggerstorm = K2Node_DynamicCast_AsProjectile_TED_Salt_NBattery_Daggerstorm;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Instigator = K2Node_CustomEvent_Instigator;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_Damage_Source = K2Node_CustomEvent_Damage_Source;
	Parms.K2Node_CustomEvent_Damaged_Target = K2Node_CustomEvent_Damaged_Target;
	Parms.K2Node_CustomEvent_Details = K2Node_CustomEvent_Details;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_MakeStruct_GbxSpawnActorAsyncRequest = K2Node_MakeStruct_GbxSpawnActorAsyncRequest;
	Parms.CallFunc_SpawnActorAsync_ReturnValue = CallFunc_SpawnActorAsync_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


