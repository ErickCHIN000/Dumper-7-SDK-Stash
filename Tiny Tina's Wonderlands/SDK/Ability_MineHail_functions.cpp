#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_MineHail.Ability_MineHail_C
// (None)

class UClass* UAbility_MineHail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_MineHail_C");

	return Clss;
}


// Ability_MineHail_C Ability_MineHail.Default__Ability_MineHail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_MineHail_C* UAbility_MineHail_C::GetDefaultObj()
{
	static class UAbility_MineHail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_MineHail_C*>(UAbility_MineHail_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_MineHail.Ability_MineHail_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_MineHail_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_MineHail_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_MineHail.Ability_MineHail_C.Detonate Spell Projectiles
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_MineHail_C::Detonate_Spell_Projectiles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_MineHail_C", "Detonate Spell Projectiles");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_MineHail.Ability_MineHail_C.ExecuteUbergraph_Ability_MineHail
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 K2Node_DynamicCast_AsGrenade_Mod                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLightProjectileQueryData   K2Node_MakeStruct_LightProjectileQueryData                       (NoDestructor)
// float                              CallFunc_GetSpellModDamage_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_MineHail_C::ExecuteUbergraph_Ability_MineHail(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AGrenadeMod* K2Node_DynamicCast_AsGrenade_Mod, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FLightProjectileQueryData& K2Node_MakeStruct_LightProjectileQueryData, float CallFunc_GetSpellModDamage_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_MineHail_C", "ExecuteUbergraph_Ability_MineHail");

	Params::UAbility_MineHail_C_ExecuteUbergraph_Ability_MineHail_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsGrenade_Mod = K2Node_DynamicCast_AsGrenade_Mod;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_LightProjectileQueryData = K2Node_MakeStruct_LightProjectileQueryData;
	Parms.CallFunc_GetSpellModDamage_ReturnValue = CallFunc_GetSpellModDamage_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


