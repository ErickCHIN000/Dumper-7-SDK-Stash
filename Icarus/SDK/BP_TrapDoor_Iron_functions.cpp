#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TrapDoor_Iron.BP_TrapDoor_Iron_C
// (Actor)

class UClass* ABP_TrapDoor_Iron_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TrapDoor_Iron_C");

	return Clss;
}


// BP_TrapDoor_Iron_C BP_TrapDoor_Iron.Default__BP_TrapDoor_Iron_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TrapDoor_Iron_C* ABP_TrapDoor_Iron_C::GetDefaultObj()
{
	static class ABP_TrapDoor_Iron_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TrapDoor_Iron_C*>(ABP_TrapDoor_Iron_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TrapDoor_Iron.BP_TrapDoor_Iron_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_TrapDoor_Iron_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TrapDoor_Iron_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TrapDoor_Iron.BP_TrapDoor_Iron_C.ExecuteUbergraph_BP_TrapDoor_Iron
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TrapDoor_Iron_C::ExecuteUbergraph_BP_TrapDoor_Iron(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TrapDoor_Iron_C", "ExecuteUbergraph_BP_TrapDoor_Iron");

	Params::ABP_TrapDoor_Iron_C_ExecuteUbergraph_BP_TrapDoor_Iron_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


