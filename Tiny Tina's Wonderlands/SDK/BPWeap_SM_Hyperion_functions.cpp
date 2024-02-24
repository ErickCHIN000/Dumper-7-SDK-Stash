#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C
// (Actor)

class UClass* ABPWeap_SM_Hyperion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_SM_Hyperion_C");

	return Clss;
}


// BPWeap_SM_Hyperion_C BPWeap_SM_Hyperion.Default__BPWeap_SM_Hyperion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_SM_Hyperion_C* ABPWeap_SM_Hyperion_C::GetDefaultObj()
{
	static class ABPWeap_SM_Hyperion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_SM_Hyperion_C*>(ABPWeap_SM_Hyperion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.Tediore_WeaponData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DamageRadius                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      DamageTypeClass                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumMIRVProjectiles                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FireRate                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LoadedAmmo                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ThrowType                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_SM_Hyperion_C::Tediore_WeaponData(float* DamageRadius, class UClass** DamageTypeClass, int32* NumMIRVProjectiles, float* FireRate, float* LoadedAmmo, int32* ThrowType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SM_Hyperion_C", "Tediore_WeaponData");

	Params::ABPWeap_SM_Hyperion_C_Tediore_WeaponData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DamageRadius != nullptr)
		*DamageRadius = Parms.DamageRadius;

	if (DamageTypeClass != nullptr)
		*DamageTypeClass = Parms.DamageTypeClass;

	if (NumMIRVProjectiles != nullptr)
		*NumMIRVProjectiles = Parms.NumMIRVProjectiles;

	if (FireRate != nullptr)
		*FireRate = Parms.FireRate;

	if (LoadedAmmo != nullptr)
		*LoadedAmmo = Parms.LoadedAmmo;

	if (ThrowType != nullptr)
		*ThrowType = Parms.ThrowType;

}


// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.HideWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_SM_Hyperion_C::HideWeapon(TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SM_Hyperion_C", "HideWeapon");

	Params::ABPWeap_SM_Hyperion_C_HideWeapon_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.ShowWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWwiseAudioComponent*        CallFunc_GetDefaultWwiseComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue                              (None)

void ABPWeap_SM_Hyperion_C::ShowWeapon(class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SM_Hyperion_C", "ShowWeapon");

	Params::ABPWeap_SM_Hyperion_C_ShowWeapon_Params Parms{};

	Parms.CallFunc_GetDefaultWwiseComponent_ReturnValue = CallFunc_GetDefaultWwiseComponent_ReturnValue;
	Parms.CallFunc_PostWwiseEvent_ReturnValue = CallFunc_PostWwiseEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.ThrowWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_SM_Hyperion_C::ThrowWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SM_Hyperion_C", "ThrowWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_SM_Hyperion_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SM_Hyperion_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.WeaponAttached
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_SM_Hyperion_C::WeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SM_Hyperion_C", "WeaponAttached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.Notify_ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAutoReload                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_SM_Hyperion_C::Notify_ReloadStarted(bool bAutoReload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SM_Hyperion_C", "Notify_ReloadStarted");

	Params::ABPWeap_SM_Hyperion_C_Notify_ReloadStarted_Params Parms{};

	Parms.bAutoReload = bAutoReload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_SM_Hyperion.BPWeap_SM_Hyperion_C.ExecuteUbergraph_BPWeap_SM_Hyperion
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryBalanceStateComponent*CallFunc_GetInventoryBalanceState_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTedioreWeaponBalanceStateComponent*K2Node_DynamicCast_AsTediore_Weapon_Balance_State_Component      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetTedioreProjectileClass_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bAutoReload                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_SM_Hyperion_C::ExecuteUbergraph_BPWeap_SM_Hyperion(int32 EntryPoint, float CallFunc_GetValueOfAttribute_ReturnValue, class UInventoryBalanceStateComponent* CallFunc_GetInventoryBalanceState_ReturnValue, class UTedioreWeaponBalanceStateComponent* K2Node_DynamicCast_AsTediore_Weapon_Balance_State_Component, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetTedioreProjectileClass_ReturnValue, bool K2Node_Event_bAutoReload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SM_Hyperion_C", "ExecuteUbergraph_BPWeap_SM_Hyperion");

	Params::ABPWeap_SM_Hyperion_C_ExecuteUbergraph_BPWeap_SM_Hyperion_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_GetInventoryBalanceState_ReturnValue = CallFunc_GetInventoryBalanceState_ReturnValue;
	Parms.K2Node_DynamicCast_AsTediore_Weapon_Balance_State_Component = K2Node_DynamicCast_AsTediore_Weapon_Balance_State_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTedioreProjectileClass_ReturnValue = CallFunc_GetTedioreProjectileClass_ReturnValue;
	Parms.K2Node_Event_bAutoReload = K2Node_Event_bAutoReload;

	UObject::ProcessEvent(Func, &Parms);

}

}

