#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_SM_TED.BPWeap_SM_TED_C
// (Actor)

class UClass* ABPWeap_SM_TED_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_SM_TED_C");

	return Clss;
}


// BPWeap_SM_TED_C BPWeap_SM_TED.Default__BPWeap_SM_TED_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_SM_TED_C* ABPWeap_SM_TED_C::GetDefaultObj()
{
	static class ABPWeap_SM_TED_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_SM_TED_C*>(ABPWeap_SM_TED_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_SM_TED.BPWeap_SM_TED_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_SM_TED_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SM_TED_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_SM_TED.BPWeap_SM_TED_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPWeap_SM_TED_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SM_TED_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_SM_TED.BPWeap_SM_TED_C.ExecuteUbergraph_BPWeap_SM_TED
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_SM_TED_C::ExecuteUbergraph_BPWeap_SM_TED(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SM_TED_C", "ExecuteUbergraph_BPWeap_SM_TED");

	Params::ABPWeap_SM_TED_C_ExecuteUbergraph_BPWeap_SM_TED_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


