#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Quadbow_Modeswitch.Ability_Quadbow_Modeswitch_C
// (None)

class UClass* UAbility_Quadbow_Modeswitch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Quadbow_Modeswitch_C");

	return Clss;
}


// Ability_Quadbow_Modeswitch_C Ability_Quadbow_Modeswitch.Default__Ability_Quadbow_Modeswitch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Quadbow_Modeswitch_C* UAbility_Quadbow_Modeswitch_C::GetDefaultObj()
{
	static class UAbility_Quadbow_Modeswitch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Quadbow_Modeswitch_C*>(UAbility_Quadbow_Modeswitch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Quadbow_Modeswitch.Ability_Quadbow_Modeswitch_C.SwitchedWeaponMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Quadbow_Modeswitch_C::SwitchedWeaponMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Quadbow_Modeswitch_C", "SwitchedWeaponMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Quadbow_Modeswitch.Ability_Quadbow_Modeswitch_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Quadbow_Modeswitch_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Quadbow_Modeswitch_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Quadbow_Modeswitch.Ability_Quadbow_Modeswitch_C.OnReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     EventWeapon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAutoReload                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_Quadbow_Modeswitch_C::OnReloadStarted(class AWeapon* EventWeapon, bool bAutoReload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Quadbow_Modeswitch_C", "OnReloadStarted");

	Params::UAbility_Quadbow_Modeswitch_C_OnReloadStarted_Params Parms{};

	Parms.EventWeapon = EventWeapon;
	Parms.bAutoReload = bAutoReload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Quadbow_Modeswitch.Ability_Quadbow_Modeswitch_C.ExecuteUbergraph_Ability_Quadbow_Modeswitch
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPChar_Player_C*            K2Node_DynamicCast_AsBPChar_Player                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AWeapon*                     CallFunc_GetActiveWeapon_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     K2Node_CustomEvent_EventWeapon                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bAutoReload                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)

void UAbility_Quadbow_Modeswitch_C::ExecuteUbergraph_Ability_Quadbow_Modeswitch(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABPChar_Player_C* K2Node_DynamicCast_AsBPChar_Player, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AWeapon* CallFunc_GetActiveWeapon_ReturnValue, class AWeapon* K2Node_CustomEvent_EventWeapon, bool K2Node_CustomEvent_bAutoReload, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Quadbow_Modeswitch_C", "ExecuteUbergraph_Ability_Quadbow_Modeswitch");

	Params::UAbility_Quadbow_Modeswitch_C_ExecuteUbergraph_Ability_Quadbow_Modeswitch_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPChar_Player = K2Node_DynamicCast_AsBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetActiveWeapon_ReturnValue = CallFunc_GetActiveWeapon_ReturnValue;
	Parms.K2Node_CustomEvent_EventWeapon = K2Node_CustomEvent_EventWeapon;
	Parms.K2Node_CustomEvent_bAutoReload = K2Node_CustomEvent_bAutoReload;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


