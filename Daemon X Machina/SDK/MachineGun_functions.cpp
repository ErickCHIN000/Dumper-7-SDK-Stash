#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MachineGun.MachineGun_C
// (Actor)

class UClass* AMachineGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MachineGun_C");

	return Clss;
}


// MachineGun_C MachineGun.Default__MachineGun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMachineGun_C* AMachineGun_C::GetDefaultObj()
{
	static class AMachineGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMachineGun_C*>(AMachineGun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MachineGun.MachineGun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMachineGun_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MachineGun_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MachineGun.MachineGun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMachineGun_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MachineGun_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MachineGun.MachineGun_C.ExecuteUbergraph_MachineGun
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMachineGun_C::ExecuteUbergraph_MachineGun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MachineGun_C", "ExecuteUbergraph_MachineGun");

	Params::AMachineGun_C_ExecuteUbergraph_MachineGun_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


