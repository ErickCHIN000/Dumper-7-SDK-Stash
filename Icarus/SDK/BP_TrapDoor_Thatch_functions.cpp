#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TrapDoor_Thatch.BP_TrapDoor_Thatch_C
// (Actor)

class UClass* ABP_TrapDoor_Thatch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TrapDoor_Thatch_C");

	return Clss;
}


// BP_TrapDoor_Thatch_C BP_TrapDoor_Thatch.Default__BP_TrapDoor_Thatch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TrapDoor_Thatch_C* ABP_TrapDoor_Thatch_C::GetDefaultObj()
{
	static class ABP_TrapDoor_Thatch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TrapDoor_Thatch_C*>(ABP_TrapDoor_Thatch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TrapDoor_Thatch.BP_TrapDoor_Thatch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_TrapDoor_Thatch_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TrapDoor_Thatch_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TrapDoor_Thatch.BP_TrapDoor_Thatch_C.ExecuteUbergraph_BP_TrapDoor_Thatch
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TrapDoor_Thatch_C::ExecuteUbergraph_BP_TrapDoor_Thatch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TrapDoor_Thatch_C", "ExecuteUbergraph_BP_TrapDoor_Thatch");

	Params::ABP_TrapDoor_Thatch_C_ExecuteUbergraph_BP_TrapDoor_Thatch_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


