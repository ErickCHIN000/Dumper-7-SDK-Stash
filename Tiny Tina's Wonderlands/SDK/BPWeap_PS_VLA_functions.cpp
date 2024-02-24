#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_PS_VLA.BPWeap_PS_VLA_C
// (Actor)

class UClass* ABPWeap_PS_VLA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_PS_VLA_C");

	return Clss;
}


// BPWeap_PS_VLA_C BPWeap_PS_VLA.Default__BPWeap_PS_VLA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_PS_VLA_C* ABPWeap_PS_VLA_C::GetDefaultObj()
{
	static class ABPWeap_PS_VLA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_PS_VLA_C*>(ABPWeap_PS_VLA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_PS_VLA_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_VLA_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.ModeSwitchStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_PS_VLA_C::ModeSwitchStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_VLA_C", "ModeSwitchStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.Notify_ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAutoReload                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_PS_VLA_C::Notify_ReloadStarted(bool bAutoReload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_VLA_C", "Notify_ReloadStarted");

	Params::ABPWeap_PS_VLA_C_Notify_ReloadStarted_Params Parms{};

	Parms.bAutoReload = bAutoReload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.ExecuteUbergraph_BPWeap_PS_VLA
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bAutoReload                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_PS_VLA_C::ExecuteUbergraph_BPWeap_PS_VLA(int32 EntryPoint, bool K2Node_Event_bAutoReload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_PS_VLA_C", "ExecuteUbergraph_BPWeap_PS_VLA");

	Params::ABPWeap_PS_VLA_C_ExecuteUbergraph_BPWeap_PS_VLA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bAutoReload = K2Node_Event_bAutoReload;

	UObject::ProcessEvent(Func, &Parms);

}

}


