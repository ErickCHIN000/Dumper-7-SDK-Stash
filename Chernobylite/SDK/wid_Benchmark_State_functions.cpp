#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass wid_Benchmark_State.wid_Benchmark_State_C
// (None)

class UClass* IWid_Benchmark_State_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Benchmark_State_C");

	return Clss;
}


// wid_Benchmark_State_C wid_Benchmark_State.Default__wid_Benchmark_State_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IWid_Benchmark_State_C* IWid_Benchmark_State_C::GetDefaultObj()
{
	static class IWid_Benchmark_State_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IWid_Benchmark_State_C*>(IWid_Benchmark_State_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Benchmark_State.wid_Benchmark_State_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_Benchmark_State_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Benchmark_State_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Benchmark_State.wid_Benchmark_State_C.SetBenchmarkActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_Benchmark_C*             BActor                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IWid_Benchmark_State_C::SetBenchmarkActor(class Abp_Benchmark_C* BActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Benchmark_State_C", "SetBenchmarkActor");

	Params::IWid_Benchmark_State_C_SetBenchmarkActor_Params Parms{};

	Parms.BActor = BActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


