#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Carpentry_Bench_T4.BP_Carpentry_Bench_T4_C
// (Actor)

class UClass* ABP_Carpentry_Bench_T4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Carpentry_Bench_T4_C");

	return Clss;
}


// BP_Carpentry_Bench_T4_C BP_Carpentry_Bench_T4.Default__BP_Carpentry_Bench_T4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Carpentry_Bench_T4_C* ABP_Carpentry_Bench_T4_C::GetDefaultObj()
{
	static class ABP_Carpentry_Bench_T4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Carpentry_Bench_T4_C*>(ABP_Carpentry_Bench_T4_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Carpentry_Bench_T4.BP_Carpentry_Bench_T4_C.EnergyNetworkStateUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Carpentry_Bench_T4_C::EnergyNetworkStateUpdate(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Carpentry_Bench_T4_C", "EnergyNetworkStateUpdate");

	Params::ABP_Carpentry_Bench_T4_C_EnergyNetworkStateUpdate_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Carpentry_Bench_T4.BP_Carpentry_Bench_T4_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Carpentry_Bench_T4_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Carpentry_Bench_T4_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Carpentry_Bench_T4.BP_Carpentry_Bench_T4_C.ExecuteUbergraph_BP_Carpentry_Bench_T4
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Carpentry_Bench_T4_C::ExecuteUbergraph_BP_Carpentry_Bench_T4(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Carpentry_Bench_T4_C", "ExecuteUbergraph_BP_Carpentry_Bench_T4");

	Params::ABP_Carpentry_Bench_T4_C_ExecuteUbergraph_BP_Carpentry_Bench_T4_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


