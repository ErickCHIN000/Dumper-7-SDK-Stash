#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_HW_VLA.BPWeap_HW_VLA_C
// (Actor)

class UClass* ABPWeap_HW_VLA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_HW_VLA_C");

	return Clss;
}


// BPWeap_HW_VLA_C BPWeap_HW_VLA.Default__BPWeap_HW_VLA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_HW_VLA_C* ABPWeap_HW_VLA_C::GetDefaultObj()
{
	static class ABPWeap_HW_VLA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_HW_VLA_C*>(ABPWeap_HW_VLA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_HW_VLA.BPWeap_HW_VLA_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_HW_VLA_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_HW_VLA_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_HW_VLA.BPWeap_HW_VLA_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPWeap_HW_VLA_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_HW_VLA_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_HW_VLA.BPWeap_HW_VLA_C.LoadShells
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_HW_VLA_C::LoadShells()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_HW_VLA_C", "LoadShells");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_HW_VLA.BPWeap_HW_VLA_C.ShellsLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_HW_VLA_C::ShellsLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_HW_VLA_C", "ShellsLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_HW_VLA.BPWeap_HW_VLA_C.ExecuteUbergraph_BPWeap_HW_VLA
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_HW_VLA_C::ExecuteUbergraph_BPWeap_HW_VLA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_HW_VLA_C", "ExecuteUbergraph_BPWeap_HW_VLA");

	Params::ABPWeap_HW_VLA_C_ExecuteUbergraph_BPWeap_HW_VLA_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


