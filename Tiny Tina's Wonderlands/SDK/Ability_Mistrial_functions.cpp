#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Mistrial.Ability_Mistrial_C
// (None)

class UClass* UAbility_Mistrial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Mistrial_C");

	return Clss;
}


// Ability_Mistrial_C Ability_Mistrial.Default__Ability_Mistrial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Mistrial_C* UAbility_Mistrial_C::GetDefaultObj()
{
	static class UAbility_Mistrial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Mistrial_C*>(UAbility_Mistrial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Mistrial.Ability_Mistrial_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Mistrial_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Mistrial_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Mistrial.Ability_Mistrial_C.UnregisterWSM
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Mistrial_C::UnregisterWSM()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Mistrial_C", "UnregisterWSM");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Mistrial.Ability_Mistrial_C.RegisterWSM
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Mistrial_C::RegisterWSM()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Mistrial_C", "RegisterWSM");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Mistrial.Ability_Mistrial_C.MistrialTryApplyWSM
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Mistrial_C::MistrialTryApplyWSM()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Mistrial_C", "MistrialTryApplyWSM");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Mistrial.Ability_Mistrial_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Mistrial_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Mistrial_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Mistrial.Ability_Mistrial_C.ExecuteUbergraph_Ability_Mistrial
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOakAbilityResourceSpec_WeaponShotModifierK2Node_MakeStruct_OakAbilityResourceSpec_WeaponShotModifier      (NoDestructor, ContainsInstancedReference)
// struct FOakAbilityResourceSpec_WeaponShotModifierK2Node_MakeStruct_OakAbilityResourceSpec_WeaponShotModifier1     (NoDestructor, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class AWeapon*                     CallFunc_GetActiveWeapon_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_Mistrial_C::ExecuteUbergraph_Ability_Mistrial(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, const struct FOakAbilityResourceSpec_WeaponShotModifier& K2Node_MakeStruct_OakAbilityResourceSpec_WeaponShotModifier, const struct FOakAbilityResourceSpec_WeaponShotModifier& K2Node_MakeStruct_OakAbilityResourceSpec_WeaponShotModifier1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AWeapon* CallFunc_GetActiveWeapon_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Mistrial_C", "ExecuteUbergraph_Ability_Mistrial");

	Params::UAbility_Mistrial_C_ExecuteUbergraph_Ability_Mistrial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilityOwner_ReturnValue1 = CallFunc_GetAbilityOwner_ReturnValue1;
	Parms.K2Node_MakeStruct_OakAbilityResourceSpec_WeaponShotModifier = K2Node_MakeStruct_OakAbilityResourceSpec_WeaponShotModifier;
	Parms.K2Node_MakeStruct_OakAbilityResourceSpec_WeaponShotModifier1 = K2Node_MakeStruct_OakAbilityResourceSpec_WeaponShotModifier1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetActiveWeapon_ReturnValue = CallFunc_GetActiveWeapon_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


