#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C
// (Actor)

class UClass* ABPWeap_Torgue_BaseWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_Torgue_BaseWeapon_C");

	return Clss;
}


// BPWeap_Torgue_BaseWeapon_C BPWeap_Torgue_BaseWeapon.Default__BPWeap_Torgue_BaseWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_Torgue_BaseWeapon_C* ABPWeap_Torgue_BaseWeapon_C::GetDefaultObj()
{
	static class ABPWeap_Torgue_BaseWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_Torgue_BaseWeapon_C*>(ABPWeap_Torgue_BaseWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.DetonateActiveProjectiles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetValueOfAttributeAsInteger_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPWeaponFireProjectileComponent_Torgue_C*CallFunc_GetUseModeComponentByClass_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLightProjectileQueryData   K2Node_MakeStruct_LightProjectileQueryData                       (NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLightProjectileQueryData   K2Node_MakeStruct_LightProjectileQueryData1                      (NoDestructor)

void ABPWeap_Torgue_BaseWeapon_C::DetonateActiveProjectiles(bool CallFunc_HasAuthority_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_GetValueOfAttributeAsInteger_ReturnValue, class UBPWeaponFireProjectileComponent_Torgue_C* CallFunc_GetUseModeComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UClass* K2Node_Select_Default, float CallFunc_GetValueOfAttribute_ReturnValue1, const struct FLightProjectileQueryData& K2Node_MakeStruct_LightProjectileQueryData, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FLightProjectileQueryData& K2Node_MakeStruct_LightProjectileQueryData1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Torgue_BaseWeapon_C", "DetonateActiveProjectiles");

	Params::ABPWeap_Torgue_BaseWeapon_C_DetonateActiveProjectiles_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetValueOfAttributeAsInteger_ReturnValue = CallFunc_GetValueOfAttributeAsInteger_ReturnValue;
	Parms.CallFunc_GetUseModeComponentByClass_ReturnValue = CallFunc_GetUseModeComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue1 = CallFunc_GetValueOfAttribute_ReturnValue1;
	Parms.K2Node_MakeStruct_LightProjectileQueryData = K2Node_MakeStruct_LightProjectileQueryData;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_LightProjectileQueryData1 = K2Node_MakeStruct_LightProjectileQueryData1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_Torgue_BaseWeapon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Torgue_BaseWeapon_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPWeap_Torgue_BaseWeapon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Torgue_BaseWeapon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ModeSwitched
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_Torgue_BaseWeapon_C::ModeSwitched()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Torgue_BaseWeapon_C", "ModeSwitched");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.Notify_ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCompleted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoGiven                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_Torgue_BaseWeapon_C::Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Torgue_BaseWeapon_C", "Notify_ReloadEnded");

	Params::ABPWeap_Torgue_BaseWeapon_C_Notify_ReloadEnded_Params Parms{};

	Parms.bCompleted = bCompleted;
	Parms.bAmmoGiven = bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.DetonateProjectiles
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_Torgue_BaseWeapon_C::DetonateProjectiles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Torgue_BaseWeapon_C", "DetonateProjectiles");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.Weapon_NotifyPutDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     EventWeapon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_Torgue_BaseWeapon_C::Weapon_NotifyPutDown(class AWeapon* EventWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Torgue_BaseWeapon_C", "Weapon_NotifyPutDown");

	Params::ABPWeap_Torgue_BaseWeapon_C_Weapon_NotifyPutDown_Params Parms{};

	Parms.EventWeapon = EventWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_Torgue_BaseWeapon.BPWeap_Torgue_BaseWeapon_C.ExecuteUbergraph_BPWeap_Torgue_BaseWeapon
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bCompleted                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAmmoGiven                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class AWeapon*                     K2Node_CustomEvent_EventWeapon                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_Torgue_BaseWeapon_C::ExecuteUbergraph_BPWeap_Torgue_BaseWeapon(int32 EntryPoint, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AWeapon* K2Node_CustomEvent_EventWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_Torgue_BaseWeapon_C", "ExecuteUbergraph_BPWeap_Torgue_BaseWeapon");

	Params::ABPWeap_Torgue_BaseWeapon_C_ExecuteUbergraph_BPWeap_Torgue_BaseWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_bCompleted = K2Node_Event_bCompleted;
	Parms.K2Node_Event_bAmmoGiven = K2Node_Event_bAmmoGiven;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CustomEvent_EventWeapon = K2Node_CustomEvent_EventWeapon;

	UObject::ProcessEvent(Func, &Parms);

}

}


