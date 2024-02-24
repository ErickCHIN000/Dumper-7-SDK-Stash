#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Spell_SpellKill_WeapProj.Ability_All_Spell_SpellKill_WeapProj_C
// (None)

class UClass* UAbility_All_Spell_SpellKill_WeapProj_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Spell_SpellKill_WeapProj_C");

	return Clss;
}


// Ability_All_Spell_SpellKill_WeapProj_C Ability_All_Spell_SpellKill_WeapProj.Default__Ability_All_Spell_SpellKill_WeapProj_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Spell_SpellKill_WeapProj_C* UAbility_All_Spell_SpellKill_WeapProj_C::GetDefaultObj()
{
	static class UAbility_All_Spell_SpellKill_WeapProj_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Spell_SpellKill_WeapProj_C*>(UAbility_All_Spell_SpellKill_WeapProj_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_All_Spell_SpellKill_WeapProj.Ability_All_Spell_SpellKill_WeapProj_C.Enchantment_DoOnKillBehavior
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_All_Spell_SpellKill_WeapProj_C::Enchantment_DoOnKillBehavior()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Spell_SpellKill_WeapProj_C", "Enchantment_DoOnKillBehavior");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_All_Spell_SpellKill_WeapProj.Ability_All_Spell_SpellKill_WeapProj_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec        Spec                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FOakAbilityTimerResult      Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAbility_All_Spell_SpellKill_WeapProj_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Spell_SpellKill_WeapProj_C", "OnAbilityTimerEnded");

	Params::UAbility_All_Spell_SpellKill_WeapProj_C_OnAbilityTimerEnded_Params Parms{};

	Parms.Spec = Spec;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_All_Spell_SpellKill_WeapProj.Ability_All_Spell_SpellKill_WeapProj_C.CE_WeaponUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     EventWeapon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_All_Spell_SpellKill_WeapProj_C::CE_WeaponUsed(class AWeapon* EventWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Spell_SpellKill_WeapProj_C", "CE_WeaponUsed");

	Params::UAbility_All_Spell_SpellKill_WeapProj_C_CE_WeaponUsed_Params Parms{};

	Parms.EventWeapon = EventWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_All_Spell_SpellKill_WeapProj.Ability_All_Spell_SpellKill_WeapProj_C.CE_RollBonusProj
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_All_Spell_SpellKill_WeapProj_C::CE_RollBonusProj()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Spell_SpellKill_WeapProj_C", "CE_RollBonusProj");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_All_Spell_SpellKill_WeapProj.Ability_All_Spell_SpellKill_WeapProj_C.CE_Weap_Switched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     NewWeapon                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     LastWeapon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_All_Spell_SpellKill_WeapProj_C::CE_Weap_Switched(class AWeapon* NewWeapon, class AWeapon* LastWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Spell_SpellKill_WeapProj_C", "CE_Weap_Switched");

	Params::UAbility_All_Spell_SpellKill_WeapProj_C_CE_Weap_Switched_Params Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.LastWeapon = LastWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_All_Spell_SpellKill_WeapProj.Ability_All_Spell_SpellKill_WeapProj_C.ExecuteUbergraph_Ability_All_Spell_SpellKill_WeapProj
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOakAbilityTimerSpec        K2Node_Event_Spec                                                (ConstParm, NoDestructor)
// struct FOakAbilityTimerResult      K2Node_Event_Result                                              (ConstParm, NoDestructor)
// class AWeapon*                     K2Node_CustomEvent_EventWeapon                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateAttributeInitializer_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxAttributeModifierActionExecOutputCallFunc_ApplyAttributeEffect_ModifierActionResult               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeModifierHandle CallFunc_ApplyAttributeEffect_ReturnValue                        (None)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveAttributeModifier_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveAttributeModifier_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1         (NoDestructor)
// class AWeapon*                     K2Node_CustomEvent_NewWeapon                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     K2Node_CustomEvent_LastWeapon                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2         (NoDestructor)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle                           (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// struct FOakAbilityTimerSpec        K2Node_MakeStruct_OakAbilityTimerSpec                            (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3         (NoDestructor)

void UAbility_All_Spell_SpellKill_WeapProj_C::ExecuteUbergraph_Ability_All_Spell_SpellKill_WeapProj(int32 EntryPoint, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, class AWeapon* K2Node_CustomEvent_EventWeapon, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, float CallFunc_EvaluateAttributeInitializer_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_ApplyAttributeEffect_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_ApplyAttributeEffect_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_RemoveAttributeModifier_ReturnValue, bool CallFunc_RemoveAttributeModifier_ReturnValue1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, class AWeapon* K2Node_CustomEvent_NewWeapon, class AWeapon* K2Node_CustomEvent_LastWeapon, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Spell_SpellKill_WeapProj_C", "ExecuteUbergraph_Ability_All_Spell_SpellKill_WeapProj");

	Params::UAbility_All_Spell_SpellKill_WeapProj_C_ExecuteUbergraph_Ability_All_Spell_SpellKill_WeapProj_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Spec = K2Node_Event_Spec;
	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.K2Node_CustomEvent_EventWeapon = K2Node_CustomEvent_EventWeapon;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_EvaluateAttributeInitializer_ReturnValue = CallFunc_EvaluateAttributeInitializer_ReturnValue;
	Parms.CallFunc_ApplyAttributeEffect_ModifierActionResult = CallFunc_ApplyAttributeEffect_ModifierActionResult;
	Parms.CallFunc_ApplyAttributeEffect_ReturnValue = CallFunc_ApplyAttributeEffect_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RemoveAttributeModifier_ReturnValue = CallFunc_RemoveAttributeModifier_ReturnValue;
	Parms.CallFunc_RemoveAttributeModifier_ReturnValue1 = CallFunc_RemoveAttributeModifier_ReturnValue1;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1;
	Parms.K2Node_CustomEvent_NewWeapon = K2Node_CustomEvent_NewWeapon;
	Parms.K2Node_CustomEvent_LastWeapon = K2Node_CustomEvent_LastWeapon;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2;
	Parms.K2Node_MakeStruct_DataTableValueHandle = K2Node_MakeStruct_DataTableValueHandle;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_MakeStruct_OakAbilityTimerSpec = K2Node_MakeStruct_OakAbilityTimerSpec;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3;

	UObject::ProcessEvent(Func, &Parms);

}

}


