#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Guns_GunKill_AreaDmgSpRad.Ability_All_Guns_GunKill_AreaDmgSpRad_C
// (None)

class UClass* UAbility_All_Guns_GunKill_AreaDmgSpRad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Guns_GunKill_AreaDmgSpRad_C");

	return Clss;
}


// Ability_All_Guns_GunKill_AreaDmgSpRad_C Ability_All_Guns_GunKill_AreaDmgSpRad.Default__Ability_All_Guns_GunKill_AreaDmgSpRad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Guns_GunKill_AreaDmgSpRad_C* UAbility_All_Guns_GunKill_AreaDmgSpRad_C::GetDefaultObj()
{
	static class UAbility_All_Guns_GunKill_AreaDmgSpRad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Guns_GunKill_AreaDmgSpRad_C*>(UAbility_All_Guns_GunKill_AreaDmgSpRad_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_All_Guns_GunKill_AreaDmgSpRad.Ability_All_Guns_GunKill_AreaDmgSpRad_C.Enchantment_DoOnKillBehavior
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_All_Guns_GunKill_AreaDmgSpRad_C::Enchantment_DoOnKillBehavior()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Guns_GunKill_AreaDmgSpRad_C", "Enchantment_DoOnKillBehavior");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_All_Guns_GunKill_AreaDmgSpRad.Ability_All_Guns_GunKill_AreaDmgSpRad_C.ExecuteUbergraph_Ability_All_Guns_GunKill_AreaDmgSpRad
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle                           (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UAbility_All_Guns_GunKill_AreaDmgSpRad_C::ExecuteUbergraph_Ability_All_Guns_GunKill_AreaDmgSpRad(int32 EntryPoint, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Guns_GunKill_AreaDmgSpRad_C", "ExecuteUbergraph_Ability_All_Guns_GunKill_AreaDmgSpRad");

	Params::UAbility_All_Guns_GunKill_AreaDmgSpRad_C_ExecuteUbergraph_Ability_All_Guns_GunKill_AreaDmgSpRad_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_DataTableValueHandle = K2Node_MakeStruct_DataTableValueHandle;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


