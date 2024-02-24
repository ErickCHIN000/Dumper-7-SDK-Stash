#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TrapDoor_Wood_Refined.BP_TrapDoor_Wood_Refined_C
// (Actor)

class UClass* ABP_TrapDoor_Wood_Refined_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TrapDoor_Wood_Refined_C");

	return Clss;
}


// BP_TrapDoor_Wood_Refined_C BP_TrapDoor_Wood_Refined.Default__BP_TrapDoor_Wood_Refined_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TrapDoor_Wood_Refined_C* ABP_TrapDoor_Wood_Refined_C::GetDefaultObj()
{
	static class ABP_TrapDoor_Wood_Refined_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TrapDoor_Wood_Refined_C*>(ABP_TrapDoor_Wood_Refined_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TrapDoor_Wood_Refined.BP_TrapDoor_Wood_Refined_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_TrapDoor_Wood_Refined_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TrapDoor_Wood_Refined_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TrapDoor_Wood_Refined.BP_TrapDoor_Wood_Refined_C.ExecuteUbergraph_BP_TrapDoor_Wood_Refined
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TrapDoor_Wood_Refined_C::ExecuteUbergraph_BP_TrapDoor_Wood_Refined(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TrapDoor_Wood_Refined_C", "ExecuteUbergraph_BP_TrapDoor_Wood_Refined");

	Params::ABP_TrapDoor_Wood_Refined_C_ExecuteUbergraph_BP_TrapDoor_Wood_Refined_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


