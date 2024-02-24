#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_PS_COV.BPWeap_PS_COV_C
// (Actor)

class UClass* ABPWeap_PS_COV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_PS_COV_C");

	return Clss;
}


// BPWeap_PS_COV_C BPWeap_PS_COV.Default__BPWeap_PS_COV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_PS_COV_C* ABPWeap_PS_COV_C::GetDefaultObj()
{
	static class ABPWeap_PS_COV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_PS_COV_C*>(ABPWeap_PS_COV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_PS_COV.BPWeap_PS_COV_C.DisablePlug
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_PS_COV_C::DisablePlug()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_COV_C", "DisablePlug");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_PS_COV.BPWeap_PS_COV_C.EnablePlug
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_PS_COV_C::EnablePlug()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_COV_C", "EnablePlug");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_PS_COV.BPWeap_PS_COV_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_PS_COV_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_COV_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_PS_COV.BPWeap_PS_COV_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPWeap_PS_COV_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_COV_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_PS_COV.BPWeap_PS_COV_C.FirstPersonCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_PS_COV_C::FirstPersonCreated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_COV_C", "FirstPersonCreated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_PS_COV.BPWeap_PS_COV_C.Notify_ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCompleted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoGiven                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_PS_COV_C::Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_COV_C", "Notify_ReloadEnded");

	Params::ABPWeap_PS_COV_C_Notify_ReloadEnded_Params Parms{};

	Parms.bCompleted = bCompleted;
	Parms.bAmmoGiven = bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_PS_COV.BPWeap_PS_COV_C.ExecuteUbergraph_BPWeap_PS_COV
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCompleted                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAmmoGiven                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_PS_COV_C::ExecuteUbergraph_BPWeap_PS_COV(int32 EntryPoint, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_COV_C", "ExecuteUbergraph_BPWeap_PS_COV");

	Params::ABPWeap_PS_COV_C_ExecuteUbergraph_BPWeap_PS_COV_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bCompleted = K2Node_Event_bCompleted;
	Parms.K2Node_Event_bAmmoGiven = K2Node_Event_bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}

}


