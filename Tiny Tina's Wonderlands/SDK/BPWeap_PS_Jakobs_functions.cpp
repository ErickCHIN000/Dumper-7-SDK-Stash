#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C
// (Actor)

class UClass* ABPWeap_PS_Jakobs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_PS_Jakobs_C");

	return Clss;
}


// BPWeap_PS_Jakobs_C BPWeap_PS_Jakobs.Default__BPWeap_PS_Jakobs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_PS_Jakobs_C* ABPWeap_PS_Jakobs_C::GetDefaultObj()
{
	static class ABPWeap_PS_Jakobs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_PS_Jakobs_C*>(ABPWeap_PS_Jakobs_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_PS_Jakobs_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_Jakobs_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.HideSpeedLoader
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_PS_Jakobs_C::HideSpeedLoader()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_Jakobs_C", "HideSpeedLoader");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPWeap_PS_Jakobs_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_Jakobs_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.HideAmmo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_PS_Jakobs_C::HideAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_Jakobs_C", "HideAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.Notify_ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCompleted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoGiven                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_PS_Jakobs_C::Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_Jakobs_C", "Notify_ReloadEnded");

	Params::ABPWeap_PS_Jakobs_C_Notify_ReloadEnded_Params Parms{};

	Parms.bCompleted = bCompleted;
	Parms.bAmmoGiven = bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.ResetCylinder
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_PS_Jakobs_C::ResetCylinder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_Jakobs_C", "ResetCylinder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.Weapon_NotifyPutDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     EventWeapon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_PS_Jakobs_C::Weapon_NotifyPutDown(class AWeapon* EventWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_Jakobs_C", "Weapon_NotifyPutDown");

	Params::ABPWeap_PS_Jakobs_C_Weapon_NotifyPutDown_Params Parms{};

	Parms.EventWeapon = EventWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.ShowXbowVisibleAmmo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_PS_Jakobs_C::ShowXbowVisibleAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_Jakobs_C", "ShowXbowVisibleAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C.ExecuteUbergraph_BPWeap_PS_Jakobs
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bCompleted                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAmmoGiven                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWeapon*                     K2Node_CustomEvent_EventWeapon                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void ABPWeap_PS_Jakobs_C::ExecuteUbergraph_BPWeap_PS_Jakobs(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven, class AWeapon* K2Node_CustomEvent_EventWeapon, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_Jakobs_C", "ExecuteUbergraph_BPWeap_PS_Jakobs");

	Params::ABPWeap_PS_Jakobs_C_ExecuteUbergraph_BPWeap_PS_Jakobs_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_bCompleted = K2Node_Event_bCompleted;
	Parms.K2Node_Event_bAmmoGiven = K2Node_Event_bAmmoGiven;
	Parms.K2Node_CustomEvent_EventWeapon = K2Node_CustomEvent_EventWeapon;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}

}


