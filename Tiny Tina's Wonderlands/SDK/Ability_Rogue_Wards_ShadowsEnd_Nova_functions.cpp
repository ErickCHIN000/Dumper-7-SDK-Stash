#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Rogue_Wards_ShadowsEnd_Nova.Ability_Rogue_Wards_ShadowsEnd_Nova_C
// (None)

class UClass* UAbility_Rogue_Wards_ShadowsEnd_Nova_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Rogue_Wards_ShadowsEnd_Nova_C");

	return Clss;
}


// Ability_Rogue_Wards_ShadowsEnd_Nova_C Ability_Rogue_Wards_ShadowsEnd_Nova.Default__Ability_Rogue_Wards_ShadowsEnd_Nova_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Rogue_Wards_ShadowsEnd_Nova_C* UAbility_Rogue_Wards_ShadowsEnd_Nova_C::GetDefaultObj()
{
	static class UAbility_Rogue_Wards_ShadowsEnd_Nova_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Rogue_Wards_ShadowsEnd_Nova_C*>(UAbility_Rogue_Wards_ShadowsEnd_Nova_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Rogue_Wards_ShadowsEnd_Nova.Ability_Rogue_Wards_ShadowsEnd_Nova_C.Enchantment_ActionSkillEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*           ActionAbility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       ActionSkill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Rogue_Wards_ShadowsEnd_Nova_C::Enchantment_ActionSkillEnded(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Rogue_Wards_ShadowsEnd_Nova_C", "Enchantment_ActionSkillEnded");

	Params::UAbility_Rogue_Wards_ShadowsEnd_Nova_C_Enchantment_ActionSkillEnded_Params Parms{};

	Parms.ActionAbility = ActionAbility;
	Parms.ActionSkill = ActionSkill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Rogue_Wards_ShadowsEnd_Nova.Ability_Rogue_Wards_ShadowsEnd_Nova_C.CE_Ench_DoNova
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Rogue_Wards_ShadowsEnd_Nova_C::CE_Ench_DoNova()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Rogue_Wards_ShadowsEnd_Nova_C", "CE_Ench_DoNova");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Rogue_Wards_ShadowsEnd_Nova.Ability_Rogue_Wards_ShadowsEnd_Nova_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec        Spec                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FOakAbilityTimerResult      Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAbility_Rogue_Wards_ShadowsEnd_Nova_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Rogue_Wards_ShadowsEnd_Nova_C", "OnAbilityTimerEnded");

	Params::UAbility_Rogue_Wards_ShadowsEnd_Nova_C_OnAbilityTimerEnded_Params Parms{};

	Parms.Spec = Spec;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Rogue_Wards_ShadowsEnd_Nova.Ability_Rogue_Wards_ShadowsEnd_Nova_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Rogue_Wards_ShadowsEnd_Nova_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Rogue_Wards_ShadowsEnd_Nova_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Rogue_Wards_ShadowsEnd_Nova.Ability_Rogue_Wards_ShadowsEnd_Nova_C.ExecuteUbergraph_Ability_Rogue_Wards_ShadowsEnd_Nova
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  Temp_struct_Variable1                                            (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle                           (NoDestructor)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle1                          (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOakAbilityTimerSpec        K2Node_MakeStruct_OakAbilityTimerSpec                            (NoDestructor)
// class UOakActionAbility*           K2Node_Event_ActionAbility                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ActionSkills       K2Node_Event_ActionSkill                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetEquippedInventoryForSlot_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMeleeWeapon*                K2Node_DynamicCast_AsMelee_Weapon                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// struct FOakAbilityTimerSpec        K2Node_Event_Spec                                                (ConstParm, NoDestructor)
// struct FOakAbilityTimerResult      K2Node_Event_Result                                              (ConstParm, NoDestructor)

void UAbility_Rogue_Wards_ShadowsEnd_Nova_C::ExecuteUbergraph_Ability_Rogue_Wards_ShadowsEnd_Nova(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, const struct FHitResult& Temp_struct_Variable1, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, class UOakActionAbility* K2Node_Event_ActionAbility, enum class Enum_ActionSkills K2Node_Event_ActionSkill, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, class AMeleeWeapon* K2Node_DynamicCast_AsMelee_Weapon, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Rogue_Wards_ShadowsEnd_Nova_C", "ExecuteUbergraph_Ability_Rogue_Wards_ShadowsEnd_Nova");

	Params::UAbility_Rogue_Wards_ShadowsEnd_Nova_C_ExecuteUbergraph_Ability_Rogue_Wards_ShadowsEnd_Nova_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.K2Node_MakeStruct_DataTableValueHandle = K2Node_MakeStruct_DataTableValueHandle;
	Parms.K2Node_MakeStruct_DataTableValueHandle1 = K2Node_MakeStruct_DataTableValueHandle1;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue1 = CallFunc_GetDataTableValueFromHandle_ReturnValue1;
	Parms.K2Node_MakeStruct_OakAbilityTimerSpec = K2Node_MakeStruct_OakAbilityTimerSpec;
	Parms.K2Node_Event_ActionAbility = K2Node_Event_ActionAbility;
	Parms.K2Node_Event_ActionSkill = K2Node_Event_ActionSkill;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEquippedInventoryForSlot_ReturnValue = CallFunc_GetEquippedInventoryForSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsMelee_Weapon = K2Node_DynamicCast_AsMelee_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue = CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_Spec = K2Node_Event_Spec;
	Parms.K2Node_Event_Result = K2Node_Event_Result;

	UObject::ProcessEvent(Func, &Parms);

}

}


