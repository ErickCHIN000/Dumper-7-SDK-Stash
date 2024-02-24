#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C
// (Actor)

class UClass* ABPWeap_COV_BaseWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_COV_BaseWeapon_C");

	return Clss;
}


// BPWeap_COV_BaseWeapon_C BPWeap_COV_BaseWeapon.Default__BPWeap_COV_BaseWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_COV_BaseWeapon_C* ABPWeap_COV_BaseWeapon_C::GetDefaultObj()
{
	static class ABPWeap_COV_BaseWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_COV_BaseWeapon_C*>(ABPWeap_COV_BaseWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.DisableWaterBottle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_COV_BaseWeapon_C::DisableWaterBottle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_COV_BaseWeapon_C", "DisableWaterBottle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.EnableWaterBottle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_COV_BaseWeapon_C::EnableWaterBottle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_COV_BaseWeapon_C", "EnableWaterBottle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.GetRepairStyle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Param                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponCOVRepairComponent*   CallFunc_GetUseModeComponentByClass_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_COV_BaseWeapon_C::GetRepairStyle(int32* Param, class UWeaponCOVRepairComponent* CallFunc_GetUseModeComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_COV_BaseWeapon_C", "GetRepairStyle");

	Params::ABPWeap_COV_BaseWeapon_C_GetRepairStyle_Params Parms{};

	Parms.CallFunc_GetUseModeComponentByClass_ReturnValue = CallFunc_GetUseModeComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Param != nullptr)
		*Param = Parms.Param;

}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_COV_BaseWeapon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_COV_BaseWeapon_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPWeap_COV_BaseWeapon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_COV_BaseWeapon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponOnFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_COV_BaseWeapon_C::WeaponOnFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_COV_BaseWeapon_C", "WeaponOnFire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponPutOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_COV_BaseWeapon_C::WeaponPutOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_COV_BaseWeapon_C", "WeaponPutOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponSmokeStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_COV_BaseWeapon_C::WeaponSmokeStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_COV_BaseWeapon_C", "WeaponSmokeStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.FirstPersonCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_COV_BaseWeapon_C::FirstPersonCreated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_COV_BaseWeapon_C", "FirstPersonCreated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.EngineStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_COV_BaseWeapon_C::EngineStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_COV_BaseWeapon_C", "EngineStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.Notify_ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCompleted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoGiven                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_COV_BaseWeapon_C::Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_COV_BaseWeapon_C", "Notify_ReloadEnded");

	Params::ABPWeap_COV_BaseWeapon_C_Notify_ReloadEnded_Params Parms{};

	Parms.bCompleted = bCompleted;
	Parms.bAmmoGiven = bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.StarterSparks
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_COV_BaseWeapon_C::StarterSparks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_COV_BaseWeapon_C", "StarterSparks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponStartWatering
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_COV_BaseWeapon_C::WeaponStartWatering()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_COV_BaseWeapon_C", "WeaponStartWatering");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.ExecuteUbergraph_BPWeap_COV_BaseWeapon
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FWeaponMaterialEffectData   K2Node_MakeStruct_WeaponMaterialEffectData                       (NoDestructor)
// struct FWeaponMaterialEffectData   K2Node_MakeStruct_WeaponMaterialEffectData1                      (NoDestructor)
// int32                              CallFunc_PlayDynamicMaterialEffect_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PlayDynamicMaterialEffect_ReturnValue1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCompleted                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAmmoGiven                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_COV_BaseWeapon_C::ExecuteUbergraph_BPWeap_COV_BaseWeapon(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FWeaponMaterialEffectData& K2Node_MakeStruct_WeaponMaterialEffectData, const struct FWeaponMaterialEffectData& K2Node_MakeStruct_WeaponMaterialEffectData1, int32 CallFunc_PlayDynamicMaterialEffect_ReturnValue, int32 CallFunc_PlayDynamicMaterialEffect_ReturnValue1, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_COV_BaseWeapon_C", "ExecuteUbergraph_BPWeap_COV_BaseWeapon");

	Params::ABPWeap_COV_BaseWeapon_C_ExecuteUbergraph_BPWeap_COV_BaseWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_WeaponMaterialEffectData = K2Node_MakeStruct_WeaponMaterialEffectData;
	Parms.K2Node_MakeStruct_WeaponMaterialEffectData1 = K2Node_MakeStruct_WeaponMaterialEffectData1;
	Parms.CallFunc_PlayDynamicMaterialEffect_ReturnValue = CallFunc_PlayDynamicMaterialEffect_ReturnValue;
	Parms.CallFunc_PlayDynamicMaterialEffect_ReturnValue1 = CallFunc_PlayDynamicMaterialEffect_ReturnValue1;
	Parms.K2Node_Event_bCompleted = K2Node_Event_bCompleted;
	Parms.K2Node_Event_bAmmoGiven = K2Node_Event_bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}

}


