#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Reload_Guns_MeleeSingularity.Ability_All_Reload_Guns_MeleeSingularity_C
// (None)

class UClass* UAbility_All_Reload_Guns_MeleeSingularity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Reload_Guns_MeleeSingularity_C");

	return Clss;
}


// Ability_All_Reload_Guns_MeleeSingularity_C Ability_All_Reload_Guns_MeleeSingularity.Default__Ability_All_Reload_Guns_MeleeSingularity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Reload_Guns_MeleeSingularity_C* UAbility_All_Reload_Guns_MeleeSingularity_C::GetDefaultObj()
{
	static class UAbility_All_Reload_Guns_MeleeSingularity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Reload_Guns_MeleeSingularity_C*>(UAbility_All_Reload_Guns_MeleeSingularity_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_All_Reload_Guns_MeleeSingularity.Ability_All_Reload_Guns_MeleeSingularity_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_All_Reload_Guns_MeleeSingularity_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Reload_Guns_MeleeSingularity_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_All_Reload_Guns_MeleeSingularity.Ability_All_Reload_Guns_MeleeSingularity_C.Enchantment_OnReload
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     EventWeapon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCompleted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoGiven                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_All_Reload_Guns_MeleeSingularity_C::Enchantment_OnReload(class AWeapon* EventWeapon, bool bCompleted, bool bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Reload_Guns_MeleeSingularity_C", "Enchantment_OnReload");

	Params::UAbility_All_Reload_Guns_MeleeSingularity_C_Enchantment_OnReload_Params Parms{};

	Parms.EventWeapon = EventWeapon;
	Parms.bCompleted = bCompleted;
	Parms.bAmmoGiven = bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_All_Reload_Guns_MeleeSingularity.Ability_All_Reload_Guns_MeleeSingularity_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_All_Reload_Guns_MeleeSingularity_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Reload_Guns_MeleeSingularity_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_All_Reload_Guns_MeleeSingularity.Ability_All_Reload_Guns_MeleeSingularity_C.Enchantment_CausedMeleeDmg
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UAbility_All_Reload_Guns_MeleeSingularity_C::Enchantment_CausedMeleeDmg(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Reload_Guns_MeleeSingularity_C", "Enchantment_CausedMeleeDmg");

	Params::UAbility_All_Reload_Guns_MeleeSingularity_C_Enchantment_CausedMeleeDmg_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_All_Reload_Guns_MeleeSingularity.Ability_All_Reload_Guns_MeleeSingularity_C.ExecuteUbergraph_Ability_All_Reload_Guns_MeleeSingularity
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_GetDataTableValue_OutValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle                           (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     K2Node_Event_EventWeapon                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCompleted                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAmmoGiven                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UOakDamageCauserComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageInstigator                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_Event_DamageSource                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamagedActor                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_Event_Details                                             (ContainsInstancedReference)
// struct FSingularityInitializationInfoK2Node_MakeStruct_SingularityInitializationInfo                  (None)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USingularityComponent*       CallFunc_CreateSingularity_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_All_Reload_Guns_MeleeSingularity_C::ExecuteUbergraph_Ability_All_Reload_Guns_MeleeSingularity(int32 EntryPoint, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FHitResult& Temp_struct_Variable, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class AWeapon* K2Node_Event_EventWeapon, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UOakDamageCauserComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* K2Node_Event_DamageInstigator, float K2Node_Event_Damage, class UGbxDamageType* K2Node_Event_DamageType, class UDamageSource* K2Node_Event_DamageSource, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, const struct FSingularityInitializationInfo& K2Node_MakeStruct_SingularityInitializationInfo, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class AActor* CallFunc_GetAbilityOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, class USingularityComponent* CallFunc_CreateSingularity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Reload_Guns_MeleeSingularity_C", "ExecuteUbergraph_Ability_All_Reload_Guns_MeleeSingularity");

	Params::UAbility_All_Reload_Guns_MeleeSingularity_C_ExecuteUbergraph_Ability_All_Reload_Guns_MeleeSingularity_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetDataTableValue_OutValue = CallFunc_GetDataTableValue_OutValue;
	Parms.CallFunc_GetDataTableValue_ReturnValue = CallFunc_GetDataTableValue_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableValueHandle = K2Node_MakeStruct_DataTableValueHandle;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_Event_EventWeapon = K2Node_Event_EventWeapon;
	Parms.K2Node_Event_bCompleted = K2Node_Event_bCompleted;
	Parms.K2Node_Event_bAmmoGiven = K2Node_Event_bAmmoGiven;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_Event_DamageInstigator = K2Node_Event_DamageInstigator;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_DamageSource = K2Node_Event_DamageSource;
	Parms.K2Node_Event_DamagedActor = K2Node_Event_DamagedActor;
	Parms.K2Node_Event_Details = K2Node_Event_Details;
	Parms.K2Node_MakeStruct_SingularityInitializationInfo = K2Node_MakeStruct_SingularityInitializationInfo;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_GetAbilityOwner_ReturnValue1 = CallFunc_GetAbilityOwner_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_CreateSingularity_ReturnValue = CallFunc_CreateSingularity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


