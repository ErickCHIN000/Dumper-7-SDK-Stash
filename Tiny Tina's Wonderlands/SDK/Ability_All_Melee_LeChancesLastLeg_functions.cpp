#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Melee_LeChancesLastLeg.Ability_All_Melee_LeChancesLastLeg_C
// (None)

class UClass* UAbility_All_Melee_LeChancesLastLeg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Melee_LeChancesLastLeg_C");

	return Clss;
}


// Ability_All_Melee_LeChancesLastLeg_C Ability_All_Melee_LeChancesLastLeg.Default__Ability_All_Melee_LeChancesLastLeg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Melee_LeChancesLastLeg_C* UAbility_All_Melee_LeChancesLastLeg_C::GetDefaultObj()
{
	static class UAbility_All_Melee_LeChancesLastLeg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Melee_LeChancesLastLeg_C*>(UAbility_All_Melee_LeChancesLastLeg_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_All_Melee_LeChancesLastLeg.Ability_All_Melee_LeChancesLastLeg_C.DoHiltMod_Hit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UAbility_All_Melee_LeChancesLastLeg_C::DoHiltMod_Hit(class UGbxDamageType* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Melee_LeChancesLastLeg_C", "DoHiltMod_Hit");

	Params::UAbility_All_Melee_LeChancesLastLeg_C_DoHiltMod_Hit_Params Parms{};

	Parms.DamageType = DamageType;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_All_Melee_LeChancesLastLeg.Ability_All_Melee_LeChancesLastLeg_C.ExecuteUbergraph_Ability_All_Melee_LeChancesLastLeg
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamagedActor                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_Event_Details                                             (ContainsInstancedReference)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UAbility_All_Melee_LeChancesLastLeg_C::ExecuteUbergraph_Ability_All_Melee_LeChancesLastLeg(int32 EntryPoint, class UGbxDamageType* K2Node_Event_DamageType, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Melee_LeChancesLastLeg_C", "ExecuteUbergraph_Ability_All_Melee_LeChancesLastLeg");

	Params::UAbility_All_Melee_LeChancesLastLeg_C_ExecuteUbergraph_Ability_All_Melee_LeChancesLastLeg_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_DamagedActor = K2Node_Event_DamagedActor;
	Parms.K2Node_Event_Details = K2Node_Event_Details;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


