#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CraftingBench.BP_CraftingBench_C
// (Actor)

class UClass* ABP_CraftingBench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CraftingBench_C");

	return Clss;
}


// BP_CraftingBench_C BP_CraftingBench.Default__BP_CraftingBench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CraftingBench_C* ABP_CraftingBench_C::GetDefaultObj()
{
	static class ABP_CraftingBench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CraftingBench_C*>(ABP_CraftingBench_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CraftingBench.BP_CraftingBench_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CraftingBench_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingBench_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CraftingBench.BP_CraftingBench_C.ExecuteUbergraph_BP_CraftingBench
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CraftingBench_C::ExecuteUbergraph_BP_CraftingBench(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CraftingBench_C", "ExecuteUbergraph_BP_CraftingBench");

	Params::ABP_CraftingBench_C_ExecuteUbergraph_BP_CraftingBench_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


