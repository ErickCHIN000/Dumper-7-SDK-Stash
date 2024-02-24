#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Chemistry_Bench.BP_Chemistry_Bench_C
// (Actor)

class UClass* ABP_Chemistry_Bench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Chemistry_Bench_C");

	return Clss;
}


// BP_Chemistry_Bench_C BP_Chemistry_Bench.Default__BP_Chemistry_Bench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Chemistry_Bench_C* ABP_Chemistry_Bench_C::GetDefaultObj()
{
	static class ABP_Chemistry_Bench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Chemistry_Bench_C*>(ABP_Chemistry_Bench_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Chemistry_Bench.BP_Chemistry_Bench_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Chemistry_Bench_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Chemistry_Bench_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Chemistry_Bench.BP_Chemistry_Bench_C.ExecuteUbergraph_BP_Chemistry_Bench
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Chemistry_Bench_C::ExecuteUbergraph_BP_Chemistry_Bench(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Chemistry_Bench_C", "ExecuteUbergraph_BP_Chemistry_Bench");

	Params::ABP_Chemistry_Bench_C_ExecuteUbergraph_BP_Chemistry_Bench_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


