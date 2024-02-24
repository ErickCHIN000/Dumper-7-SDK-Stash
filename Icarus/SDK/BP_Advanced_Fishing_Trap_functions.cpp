#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Advanced_Fishing_Trap.BP_Advanced_Fishing_Trap_C
// (Actor)

class UClass* ABP_Advanced_Fishing_Trap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Advanced_Fishing_Trap_C");

	return Clss;
}


// BP_Advanced_Fishing_Trap_C BP_Advanced_Fishing_Trap.Default__BP_Advanced_Fishing_Trap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Advanced_Fishing_Trap_C* ABP_Advanced_Fishing_Trap_C::GetDefaultObj()
{
	static class ABP_Advanced_Fishing_Trap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Advanced_Fishing_Trap_C*>(ABP_Advanced_Fishing_Trap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Advanced_Fishing_Trap.BP_Advanced_Fishing_Trap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Advanced_Fishing_Trap_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Advanced_Fishing_Trap_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Advanced_Fishing_Trap.BP_Advanced_Fishing_Trap_C.ExecuteUbergraph_BP_Advanced_Fishing_Trap
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Advanced_Fishing_Trap_C::ExecuteUbergraph_BP_Advanced_Fishing_Trap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Advanced_Fishing_Trap_C", "ExecuteUbergraph_BP_Advanced_Fishing_Trap");

	Params::ABP_Advanced_Fishing_Trap_C_ExecuteUbergraph_BP_Advanced_Fishing_Trap_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


