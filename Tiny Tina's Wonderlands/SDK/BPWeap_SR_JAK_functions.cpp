#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_SR_JAK.BPWeap_SR_JAK_C
// (Actor)

class UClass* ABPWeap_SR_JAK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_SR_JAK_C");

	return Clss;
}


// BPWeap_SR_JAK_C BPWeap_SR_JAK.Default__BPWeap_SR_JAK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_SR_JAK_C* ABPWeap_SR_JAK_C::GetDefaultObj()
{
	static class ABPWeap_SR_JAK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_SR_JAK_C*>(ABPWeap_SR_JAK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_SR_JAK_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SR_JAK_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPWeap_SR_JAK_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SR_JAK_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.HideMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_SR_JAK_C::HideMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SR_JAK_C", "HideMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.ShowAmmo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_SR_JAK_C::ShowAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SR_JAK_C", "ShowAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.HideAmmo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_SR_JAK_C::HideAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SR_JAK_C", "HideAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.Fire_Rotate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_SR_JAK_C::Fire_Rotate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SR_JAK_C", "Fire_Rotate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.RotationReset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_SR_JAK_C::RotationReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SR_JAK_C", "RotationReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.Notify_ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCompleted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoGiven                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_SR_JAK_C::Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SR_JAK_C", "Notify_ReloadEnded");

	Params::ABPWeap_SR_JAK_C_Notify_ReloadEnded_Params Parms{};

	Parms.bCompleted = bCompleted;
	Parms.bAmmoGiven = bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_SR_JAK.BPWeap_SR_JAK_C.ExecuteUbergraph_BPWeap_SR_JAK
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bCompleted                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAmmoGiven                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_SR_JAK_C::ExecuteUbergraph_BPWeap_SR_JAK(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SR_JAK_C", "ExecuteUbergraph_BPWeap_SR_JAK");

	Params::ABPWeap_SR_JAK_C_ExecuteUbergraph_BPWeap_SR_JAK_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_bCompleted = K2Node_Event_bCompleted;
	Parms.K2Node_Event_bAmmoGiven = K2Node_Event_bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}

}


