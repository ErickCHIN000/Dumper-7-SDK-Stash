#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Mage_Wards_SkillStart_SplWv_Reload.Ability_Mage_Wards_SkillStart_SplWv_Reload_C
// (None)

class UClass* UAbility_Mage_Wards_SkillStart_SplWv_Reload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Mage_Wards_SkillStart_SplWv_Reload_C");

	return Clss;
}


// Ability_Mage_Wards_SkillStart_SplWv_Reload_C Ability_Mage_Wards_SkillStart_SplWv_Reload.Default__Ability_Mage_Wards_SkillStart_SplWv_Reload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Mage_Wards_SkillStart_SplWv_Reload_C* UAbility_Mage_Wards_SkillStart_SplWv_Reload_C::GetDefaultObj()
{
	static class UAbility_Mage_Wards_SkillStart_SplWv_Reload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Mage_Wards_SkillStart_SplWv_Reload_C*>(UAbility_Mage_Wards_SkillStart_SplWv_Reload_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Mage_Wards_SkillStart_SplWv_Reload.Ability_Mage_Wards_SkillStart_SplWv_Reload_C.Enchantment_ActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       ActionSkill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Mage_Wards_SkillStart_SplWv_Reload_C::Enchantment_ActionSkillActivated(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Mage_Wards_SkillStart_SplWv_Reload_C", "Enchantment_ActionSkillActivated");

	Params::UAbility_Mage_Wards_SkillStart_SplWv_Reload_C_Enchantment_ActionSkillActivated_Params Parms{};

	Parms.ActionAbility = ActionAbility;
	Parms.ActionSkill = ActionSkill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Mage_Wards_SkillStart_SplWv_Reload.Ability_Mage_Wards_SkillStart_SplWv_Reload_C.ExecuteUbergraph_Ability_Mage_Wards_SkillStart_SplWv_Reload
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakActionAbility*           K2Node_Event_ActionAbility                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       K2Node_Event_ActionSkill                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle                           (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// bool                               CallFunc_HasPlayerClass_Res                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// TScriptInterface<class IIFeat_GunMage_C>K2Node_DynamicCast_AsIFeat_Gun_Mage                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddSpellweavingStacks_Res                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Mage_Wards_SkillStart_SplWv_Reload_C::ExecuteUbergraph_Ability_Mage_Wards_SkillStart_SplWv_Reload(int32 EntryPoint, class UOakActionAbility* K2Node_Event_ActionAbility, enum class Enum_ActionSkills K2Node_Event_ActionSkill, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, bool CallFunc_HasPlayerClass_Res, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, TScriptInterface<class IIFeat_GunMage_C> K2Node_DynamicCast_AsIFeat_Gun_Mage, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_AddSpellweavingStacks_Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Mage_Wards_SkillStart_SplWv_Reload_C", "ExecuteUbergraph_Ability_Mage_Wards_SkillStart_SplWv_Reload");

	Params::UAbility_Mage_Wards_SkillStart_SplWv_Reload_C_ExecuteUbergraph_Ability_Mage_Wards_SkillStart_SplWv_Reload_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ActionAbility = K2Node_Event_ActionAbility;
	Parms.K2Node_Event_ActionSkill = K2Node_Event_ActionSkill;
	Parms.K2Node_MakeStruct_DataTableValueHandle = K2Node_MakeStruct_DataTableValueHandle;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_HasPlayerClass_Res = CallFunc_HasPlayerClass_Res;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.K2Node_DynamicCast_AsIFeat_Gun_Mage = K2Node_DynamicCast_AsIFeat_Gun_Mage;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_AddSpellweavingStacks_Res = CallFunc_AddSpellweavingStacks_Res;

	UObject::ProcessEvent(Func, &Parms);

}

}


