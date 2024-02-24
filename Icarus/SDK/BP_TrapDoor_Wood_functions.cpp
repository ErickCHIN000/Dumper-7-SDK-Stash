#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TrapDoor_Wood.BP_TrapDoor_Wood_C
// (Actor)

class UClass* ABP_TrapDoor_Wood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TrapDoor_Wood_C");

	return Clss;
}


// BP_TrapDoor_Wood_C BP_TrapDoor_Wood.Default__BP_TrapDoor_Wood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TrapDoor_Wood_C* ABP_TrapDoor_Wood_C::GetDefaultObj()
{
	static class ABP_TrapDoor_Wood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TrapDoor_Wood_C*>(ABP_TrapDoor_Wood_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TrapDoor_Wood.BP_TrapDoor_Wood_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_TrapDoor_Wood_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TrapDoor_Wood_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TrapDoor_Wood.BP_TrapDoor_Wood_C.ExecuteUbergraph_BP_TrapDoor_Wood
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TrapDoor_Wood_C::ExecuteUbergraph_BP_TrapDoor_Wood(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TrapDoor_Wood_C", "ExecuteUbergraph_BP_TrapDoor_Wood");

	Params::ABP_TrapDoor_Wood_C_ExecuteUbergraph_BP_TrapDoor_Wood_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


