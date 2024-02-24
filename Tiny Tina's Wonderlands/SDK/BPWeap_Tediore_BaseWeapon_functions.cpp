#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C
// (Actor)

class UClass* ABPWeap_Tediore_BaseWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_Tediore_BaseWeapon_C");

	return Clss;
}


// BPWeap_Tediore_BaseWeapon_C BPWeap_Tediore_BaseWeapon.Default__BPWeap_Tediore_BaseWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_Tediore_BaseWeapon_C* ABPWeap_Tediore_BaseWeapon_C::GetDefaultObj()
{
	static class ABPWeap_Tediore_BaseWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_Tediore_BaseWeapon_C*>(ABPWeap_Tediore_BaseWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.Tediore_WeaponData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DamageRadius                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      DamageTypeClass                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumMIRVProjectiles                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FireRate                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LoadedAmmo                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ThrowType                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              CallFunc_GetDamageType_ReturnValue                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_Tediore_BaseWeapon_C::Tediore_WeaponData(float* DamageRadius, class UClass** DamageTypeClass, int32* NumMIRVProjectiles, float* FireRate, float* LoadedAmmo, int32* ThrowType, float CallFunc_GetValueOfAttribute_ReturnValue, class UGbxDamageType* CallFunc_GetDamageType_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Tediore_BaseWeapon_C", "Tediore_WeaponData");

	Params::ABPWeap_Tediore_BaseWeapon_C_Tediore_WeaponData_Params Parms{};

	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_GetDamageType_ReturnValue = CallFunc_GetDamageType_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

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


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.OnRep_HideLegs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_Tediore_BaseWeapon_C::OnRep_HideLegs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Tediore_BaseWeapon_C", "OnRep_HideLegs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreShowWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWwiseAudioComponent*        CallFunc_GetDefaultWwiseComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue                              (None)

void ABPWeap_Tediore_BaseWeapon_C::TedioreShowWeapon(class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Tediore_BaseWeapon_C", "TedioreShowWeapon");

	Params::ABPWeap_Tediore_BaseWeapon_C_TedioreShowWeapon_Params Parms{};

	Parms.CallFunc_GetDefaultWwiseComponent_ReturnValue = CallFunc_GetDefaultWwiseComponent_ReturnValue;
	Parms.CallFunc_PostWwiseEvent_ReturnValue = CallFunc_PostWwiseEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreHideWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_Tediore_BaseWeapon_C::TedioreHideWeapon(TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Tediore_BaseWeapon_C", "TedioreHideWeapon");

	Params::ABPWeap_Tediore_BaseWeapon_C_TedioreHideWeapon_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.TedioreThrowWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ThrownProjectile                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_Tediore_BaseWeapon_C::TedioreThrowWeapon(class AActor** ThrownProjectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Tediore_BaseWeapon_C", "TedioreThrowWeapon");

	Params::ABPWeap_Tediore_BaseWeapon_C_TedioreThrowWeapon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ThrownProjectile != nullptr)
		*ThrownProjectile = Parms.ThrownProjectile;

}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_Tediore_BaseWeapon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Tediore_BaseWeapon_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPWeap_Tediore_BaseWeapon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Tediore_BaseWeapon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.Notify_ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAutoReload                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_Tediore_BaseWeapon_C::Notify_ReloadStarted(bool bAutoReload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Tediore_BaseWeapon_C", "Notify_ReloadStarted");

	Params::ABPWeap_Tediore_BaseWeapon_C_Notify_ReloadStarted_Params Parms{};

	Parms.bAutoReload = bAutoReload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.WeaponAttached
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_Tediore_BaseWeapon_C::WeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Tediore_BaseWeapon_C", "WeaponAttached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeOverhand
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_Tediore_BaseWeapon_C::ThrowTypeOverhand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Tediore_BaseWeapon_C", "ThrowTypeOverhand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeSideRL
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_Tediore_BaseWeapon_C::ThrowTypeSideRL()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Tediore_BaseWeapon_C", "ThrowTypeSideRL");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeUnderhand
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_Tediore_BaseWeapon_C::ThrowTypeUnderhand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Tediore_BaseWeapon_C", "ThrowTypeUnderhand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ThrowTypeSideLR
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_Tediore_BaseWeapon_C::ThrowTypeSideLR()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Tediore_BaseWeapon_C", "ThrowTypeSideLR");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_Tediore_BaseWeapon.BPWeap_Tediore_BaseWeapon_C.ExecuteUbergraph_BPWeap_Tediore_BaseWeapon
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bAutoReload                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryBalanceStateComponent*CallFunc_GetInventoryBalanceState_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTedioreWeaponBalanceStateComponent*K2Node_DynamicCast_AsTediore_Weapon_Balance_State_Component      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetTedioreProjectileClass_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_Tediore_BaseWeapon_C::ExecuteUbergraph_BPWeap_Tediore_BaseWeapon(int32 EntryPoint, bool K2Node_Event_bAutoReload, float CallFunc_GetValueOfAttribute_ReturnValue, class UInventoryBalanceStateComponent* CallFunc_GetInventoryBalanceState_ReturnValue, class UTedioreWeaponBalanceStateComponent* K2Node_DynamicCast_AsTediore_Weapon_Balance_State_Component, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetTedioreProjectileClass_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Tediore_BaseWeapon_C", "ExecuteUbergraph_BPWeap_Tediore_BaseWeapon");

	Params::ABPWeap_Tediore_BaseWeapon_C_ExecuteUbergraph_BPWeap_Tediore_BaseWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bAutoReload = K2Node_Event_bAutoReload;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_GetInventoryBalanceState_ReturnValue = CallFunc_GetInventoryBalanceState_ReturnValue;
	Parms.K2Node_DynamicCast_AsTediore_Weapon_Balance_State_Component = K2Node_DynamicCast_AsTediore_Weapon_Balance_State_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTedioreProjectileClass_ReturnValue = CallFunc_GetTedioreProjectileClass_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


