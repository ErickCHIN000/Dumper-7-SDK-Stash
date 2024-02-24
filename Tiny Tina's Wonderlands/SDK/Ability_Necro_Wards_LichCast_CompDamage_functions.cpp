#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Necro_Wards_LichCast_CompDamage.Ability_Necro_Wards_LichCast_CompDamage_C
// (None)

class UClass* UAbility_Necro_Wards_LichCast_CompDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Necro_Wards_LichCast_CompDamage_C");

	return Clss;
}


// Ability_Necro_Wards_LichCast_CompDamage_C Ability_Necro_Wards_LichCast_CompDamage.Default__Ability_Necro_Wards_LichCast_CompDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Necro_Wards_LichCast_CompDamage_C* UAbility_Necro_Wards_LichCast_CompDamage_C::GetDefaultObj()
{
	static class UAbility_Necro_Wards_LichCast_CompDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Necro_Wards_LichCast_CompDamage_C*>(UAbility_Necro_Wards_LichCast_CompDamage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Necro_Wards_LichCast_CompDamage.Ability_Necro_Wards_LichCast_CompDamage_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Necro_Wards_LichCast_CompDamage_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Necro_Wards_LichCast_CompDamage_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Necro_Wards_LichCast_CompDamage.Ability_Necro_Wards_LichCast_CompDamage_C.CE_LichCastSpell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Necro_Wards_LichCast_CompDamage_C::CE_LichCastSpell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Necro_Wards_LichCast_CompDamage_C", "CE_LichCastSpell");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Necro_Wards_LichCast_CompDamage.Ability_Necro_Wards_LichCast_CompDamage_C.ExecuteUbergraph_Ability_Necro_Wards_LichCast_CompDamage
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle                           (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UBPEventHub_PlayerCharacter_C*K2Node_DynamicCast_AsBPEvent_Hub_Player_Character                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UAbility_Necro_Wards_LichCast_CompDamage_C::ExecuteUbergraph_Ability_Necro_Wards_LichCast_CompDamage(int32 EntryPoint, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Necro_Wards_LichCast_CompDamage_C", "ExecuteUbergraph_Ability_Necro_Wards_LichCast_CompDamage");

	Params::UAbility_Necro_Wards_LichCast_CompDamage_C_ExecuteUbergraph_Ability_Necro_Wards_LichCast_CompDamage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_DataTableValueHandle = K2Node_MakeStruct_DataTableValueHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsBPEvent_Hub_Player_Character = K2Node_DynamicCast_AsBPEvent_Hub_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


