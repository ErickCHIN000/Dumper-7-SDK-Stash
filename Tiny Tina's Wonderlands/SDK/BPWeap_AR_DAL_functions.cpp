#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_AR_DAL.BPWeap_AR_DAL_C
// (Actor)

class UClass* ABPWeap_AR_DAL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_AR_DAL_C");

	return Clss;
}


// BPWeap_AR_DAL_C BPWeap_AR_DAL.Default__BPWeap_AR_DAL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_AR_DAL_C* ABPWeap_AR_DAL_C::GetDefaultObj()
{
	static class ABPWeap_AR_DAL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_AR_DAL_C*>(ABPWeap_AR_DAL_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_DAL_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_DAL_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.ShowChainFeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_DAL_C::ShowChainFeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_DAL_C", "ShowChainFeed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.Notify_ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCompleted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoGiven                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_AR_DAL_C::Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_DAL_C", "Notify_ReloadEnded");

	Params::ABPWeap_AR_DAL_C_Notify_ReloadEnded_Params Parms{};

	Parms.bCompleted = bCompleted;
	Parms.bAmmoGiven = bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.HideChain
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_DAL_C::HideChain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_DAL_C", "HideChain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_DAL.BPWeap_AR_DAL_C.ExecuteUbergraph_BPWeap_AR_DAL
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCompleted                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAmmoGiven                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_AR_DAL_C::ExecuteUbergraph_BPWeap_AR_DAL(int32 EntryPoint, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_DAL_C", "ExecuteUbergraph_BPWeap_AR_DAL");

	Params::ABPWeap_AR_DAL_C_ExecuteUbergraph_BPWeap_AR_DAL_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bCompleted = K2Node_Event_bCompleted;
	Parms.K2Node_Event_bAmmoGiven = K2Node_Event_bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}

}


