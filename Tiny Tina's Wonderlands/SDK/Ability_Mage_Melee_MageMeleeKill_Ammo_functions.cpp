#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Mage_Melee_MageMeleeKill_Ammo.Ability_Mage_Melee_MageMeleeKill_Ammo_C
// (None)

class UClass* UAbility_Mage_Melee_MageMeleeKill_Ammo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Mage_Melee_MageMeleeKill_Ammo_C");

	return Clss;
}


// Ability_Mage_Melee_MageMeleeKill_Ammo_C Ability_Mage_Melee_MageMeleeKill_Ammo.Default__Ability_Mage_Melee_MageMeleeKill_Ammo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Mage_Melee_MageMeleeKill_Ammo_C* UAbility_Mage_Melee_MageMeleeKill_Ammo_C::GetDefaultObj()
{
	static class UAbility_Mage_Melee_MageMeleeKill_Ammo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Mage_Melee_MageMeleeKill_Ammo_C*>(UAbility_Mage_Melee_MageMeleeKill_Ammo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Mage_Melee_MageMeleeKill_Ammo.Ability_Mage_Melee_MageMeleeKill_Ammo_C.Enchantment_DoOnKillBehavior
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Mage_Melee_MageMeleeKill_Ammo_C::Enchantment_DoOnKillBehavior()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Mage_Melee_MageMeleeKill_Ammo_C", "Enchantment_DoOnKillBehavior");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Mage_Melee_MageMeleeKill_Ammo.Ability_Mage_Melee_MageMeleeKill_Ammo_C.ExecuteUbergraph_Ability_Mage_Melee_MageMeleeKill_Ammo
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateAttributeInitializer_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWeapon*                     CallFunc_GetActiveWeapon_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPlayerClass_Res                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_Mage_Melee_MageMeleeKill_Ammo_C::ExecuteUbergraph_Ability_Mage_Melee_MageMeleeKill_Ammo(int32 EntryPoint, float CallFunc_EvaluateAttributeInitializer_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class AWeapon* CallFunc_GetActiveWeapon_ReturnValue, bool CallFunc_HasPlayerClass_Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Mage_Melee_MageMeleeKill_Ammo_C", "ExecuteUbergraph_Ability_Mage_Melee_MageMeleeKill_Ammo");

	Params::UAbility_Mage_Melee_MageMeleeKill_Ammo_C_ExecuteUbergraph_Ability_Mage_Melee_MageMeleeKill_Ammo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EvaluateAttributeInitializer_ReturnValue = CallFunc_EvaluateAttributeInitializer_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActiveWeapon_ReturnValue = CallFunc_GetActiveWeapon_ReturnValue;
	Parms.CallFunc_HasPlayerClass_Res = CallFunc_HasPlayerClass_Res;

	UObject::ProcessEvent(Func, &Parms);

}

}


