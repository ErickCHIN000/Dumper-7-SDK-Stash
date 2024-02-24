#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_SG_Torgue.BPWeap_SG_Torgue_C
// (Actor)

class UClass* ABPWeap_SG_Torgue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_SG_Torgue_C");

	return Clss;
}


// BPWeap_SG_Torgue_C BPWeap_SG_Torgue.Default__BPWeap_SG_Torgue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_SG_Torgue_C* ABPWeap_SG_Torgue_C::GetDefaultObj()
{
	static class ABPWeap_SG_Torgue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_SG_Torgue_C*>(ABPWeap_SG_Torgue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_SG_Torgue.BPWeap_SG_Torgue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_SG_Torgue_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SG_Torgue_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_SG_Torgue.BPWeap_SG_Torgue_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPWeap_SG_Torgue_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SG_Torgue_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_SG_Torgue.BPWeap_SG_Torgue_C.HideSpeedLoader
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_SG_Torgue_C::HideSpeedLoader()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SG_Torgue_C", "HideSpeedLoader");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_SG_Torgue.BPWeap_SG_Torgue_C.ResetBoneVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_SG_Torgue_C::ResetBoneVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SG_Torgue_C", "ResetBoneVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_SG_Torgue.BPWeap_SG_Torgue_C.Notify_ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCompleted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoGiven                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_SG_Torgue_C::Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SG_Torgue_C", "Notify_ReloadEnded");

	Params::ABPWeap_SG_Torgue_C_Notify_ReloadEnded_Params Parms{};

	Parms.bCompleted = bCompleted;
	Parms.bAmmoGiven = bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_SG_Torgue.BPWeap_SG_Torgue_C.ExecuteUbergraph_BPWeap_SG_Torgue
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCompleted                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAmmoGiven                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_SG_Torgue_C::ExecuteUbergraph_BPWeap_SG_Torgue(int32 EntryPoint, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SG_Torgue_C", "ExecuteUbergraph_BPWeap_SG_Torgue");

	Params::ABPWeap_SG_Torgue_C_ExecuteUbergraph_BPWeap_SG_Torgue_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bCompleted = K2Node_Event_bCompleted;
	Parms.K2Node_Event_bAmmoGiven = K2Node_Event_bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}

}


