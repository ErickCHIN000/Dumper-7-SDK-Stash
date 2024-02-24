#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C
// (Actor)

class UClass* ABPWeap_JAK_AR_BaseWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_JAK_AR_BaseWeapon_C");

	return Clss;
}


// BPWeap_JAK_AR_BaseWeapon_C BPWeap_JAK_AR_BaseWeapon.Default__BPWeap_JAK_AR_BaseWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_JAK_AR_BaseWeapon_C* ABPWeap_JAK_AR_BaseWeapon_C::GetDefaultObj()
{
	static class ABPWeap_JAK_AR_BaseWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_JAK_AR_BaseWeapon_C*>(ABPWeap_JAK_AR_BaseWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_JAK_AR_BaseWeapon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_JAK_AR_BaseWeapon_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.Notify_ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAutoReload                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_JAK_AR_BaseWeapon_C::Notify_ReloadStarted(bool bAutoReload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_JAK_AR_BaseWeapon_C", "Notify_ReloadStarted");

	Params::ABPWeap_JAK_AR_BaseWeapon_C_Notify_ReloadStarted_Params Parms{};

	Parms.bAutoReload = bAutoReload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPWeap_JAK_AR_BaseWeapon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_JAK_AR_BaseWeapon_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.AttachAudioComponentToClip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_JAK_AR_BaseWeapon_C::AttachAudioComponentToClip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_JAK_AR_BaseWeapon_C", "AttachAudioComponentToClip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C.ExecuteUbergraph_BPWeap_JAK_AR_BaseWeapon
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bAutoReload                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMeshComponent*              CallFunc_GetAttachmentMesh_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLoadedAmmo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_JAK_AR_BaseWeapon_C::ExecuteUbergraph_BPWeap_JAK_AR_BaseWeapon(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bAutoReload, class UMeshComponent* CallFunc_GetAttachmentMesh_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, int32 CallFunc_GetLoadedAmmo_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_JAK_AR_BaseWeapon_C", "ExecuteUbergraph_BPWeap_JAK_AR_BaseWeapon");

	Params::ABPWeap_JAK_AR_BaseWeapon_C_ExecuteUbergraph_BPWeap_JAK_AR_BaseWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_bAutoReload = K2Node_Event_bAutoReload;
	Parms.CallFunc_GetAttachmentMesh_ReturnValue = CallFunc_GetAttachmentMesh_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_GetLoadedAmmo_ReturnValue = CallFunc_GetLoadedAmmo_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


