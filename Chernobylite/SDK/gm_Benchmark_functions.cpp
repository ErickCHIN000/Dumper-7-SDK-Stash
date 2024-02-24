#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass gm_Benchmark.gm_Benchmark_C
// (Actor)

class UClass* AGm_Benchmark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("gm_Benchmark_C");

	return Clss;
}


// gm_Benchmark_C gm_Benchmark.Default__gm_Benchmark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGm_Benchmark_C* AGm_Benchmark_C::GetDefaultObj()
{
	static class AGm_Benchmark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGm_Benchmark_C*>(AGm_Benchmark_C::StaticClass()->DefaultObject);

	return Default;
}


// Function gm_Benchmark.gm_Benchmark_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGm_Benchmark_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("gm_Benchmark_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function gm_Benchmark.gm_Benchmark_C.ExecuteUbergraph_gm_Benchmark
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGm_Benchmark_C::ExecuteUbergraph_gm_Benchmark(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("gm_Benchmark_C", "ExecuteUbergraph_gm_Benchmark");

	Params::AGm_Benchmark_C_ExecuteUbergraph_gm_Benchmark_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


