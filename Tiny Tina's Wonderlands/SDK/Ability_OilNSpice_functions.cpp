#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_OilNSpice.Ability_OilNSpice_C
// (None)

class UClass* UAbility_OilNSpice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_OilNSpice_C");

	return Clss;
}


// Ability_OilNSpice_C Ability_OilNSpice.Default__Ability_OilNSpice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_OilNSpice_C* UAbility_OilNSpice_C::GetDefaultObj()
{
	static class UAbility_OilNSpice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_OilNSpice_C*>(UAbility_OilNSpice_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_OilNSpice.Ability_OilNSpice_C.ClearStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_OilNSpice_C::ClearStatus(const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_OilNSpice_C", "ClearStatus");

	Params::UAbility_OilNSpice_C_ClearStatus_Params Parms{};

	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_OilNSpice.Ability_OilNSpice_C.ReAddStatusCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LastCount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_OilNSpice_C::ReAddStatusCount(int32 LastCount, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_OilNSpice_C", "ReAddStatusCount");

	Params::UAbility_OilNSpice_C_ReAddStatusCount_Params Parms{};

	Parms.LastCount = LastCount;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_OilNSpice.Ability_OilNSpice_C.GetStatusStackCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectQuery          K2Node_MakeStruct_StatusEffectQuery                              (NoDestructor)
// struct FStatusEffectQueryResult    CallFunc_QueryStatusEffect_ReturnValue                           (NoDestructor)

void UAbility_OilNSpice_C::GetStatusStackCount(int32* Count, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_OilNSpice_C", "GetStatusStackCount");

	Params::UAbility_OilNSpice_C_GetStatusStackCount_Params Parms{};

	Parms.K2Node_MakeStruct_StatusEffectQuery = K2Node_MakeStruct_StatusEffectQuery;
	Parms.CallFunc_QueryStatusEffect_ReturnValue = CallFunc_QueryStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;

}


// Function Ability_OilNSpice.Ability_OilNSpice_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_OilNSpice_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_OilNSpice_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_OilNSpice.Ability_OilNSpice_C.ReloadFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     EventWeapon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCompleted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoGiven                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_OilNSpice_C::ReloadFinished(class AWeapon* EventWeapon, bool bCompleted, bool bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_OilNSpice_C", "ReloadFinished");

	Params::UAbility_OilNSpice_C_ReloadFinished_Params Parms{};

	Parms.EventWeapon = EventWeapon;
	Parms.bCompleted = bCompleted;
	Parms.bAmmoGiven = bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_OilNSpice.Ability_OilNSpice_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_OilNSpice_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_OilNSpice_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_OilNSpice.Ability_OilNSpice_C.ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     EventWeapon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAutoReload                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_OilNSpice_C::ReloadStarted(class AWeapon* EventWeapon, bool bAutoReload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_OilNSpice_C", "ReloadStarted");

	Params::UAbility_OilNSpice_C_ReloadStarted_Params Parms{};

	Parms.EventWeapon = EventWeapon;
	Parms.bAutoReload = bAutoReload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_OilNSpice.Ability_OilNSpice_C.ExecuteUbergraph_Ability_OilNSpice
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakWeapon*                  K2Node_DynamicCast_AsOak_Weapon                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWeapon*                     K2Node_CustomEvent_EventWeapon1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bCompleted                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bAmmoGiven                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     K2Node_CustomEvent_EventWeapon                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bAutoReload                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1         (NoDestructor)

void UAbility_OilNSpice_C::ExecuteUbergraph_Ability_OilNSpice(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AOakWeapon* K2Node_DynamicCast_AsOak_Weapon, bool K2Node_DynamicCast_bSuccess, class AWeapon* K2Node_CustomEvent_EventWeapon1, bool K2Node_CustomEvent_bCompleted, bool K2Node_CustomEvent_bAmmoGiven, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class AWeapon* K2Node_CustomEvent_EventWeapon, bool K2Node_CustomEvent_bAutoReload, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_OilNSpice_C", "ExecuteUbergraph_Ability_OilNSpice");

	Params::UAbility_OilNSpice_C_ExecuteUbergraph_Ability_OilNSpice_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Weapon = K2Node_DynamicCast_AsOak_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_EventWeapon1 = K2Node_CustomEvent_EventWeapon1;
	Parms.K2Node_CustomEvent_bCompleted = K2Node_CustomEvent_bCompleted;
	Parms.K2Node_CustomEvent_bAmmoGiven = K2Node_CustomEvent_bAmmoGiven;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_CustomEvent_EventWeapon = K2Node_CustomEvent_EventWeapon;
	Parms.K2Node_CustomEvent_bAutoReload = K2Node_CustomEvent_bAutoReload;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}

}


