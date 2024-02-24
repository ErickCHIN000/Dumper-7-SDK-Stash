#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Armor_Bench.BP_Armor_Bench_C
// (Actor)

class UClass* ABP_Armor_Bench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Armor_Bench_C");

	return Clss;
}


// BP_Armor_Bench_C BP_Armor_Bench.Default__BP_Armor_Bench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Armor_Bench_C* ABP_Armor_Bench_C::GetDefaultObj()
{
	static class ABP_Armor_Bench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Armor_Bench_C*>(ABP_Armor_Bench_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Armor_Bench.BP_Armor_Bench_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Armor_Bench_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Armor_Bench_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Armor_Bench.BP_Armor_Bench_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Armor_Bench_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Armor_Bench_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Armor_Bench.BP_Armor_Bench_C.ExecuteUbergraph_BP_Armor_Bench
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Armor_Bench_C::ExecuteUbergraph_BP_Armor_Bench(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Armor_Bench_C", "ExecuteUbergraph_BP_Armor_Bench");

	Params::ABP_Armor_Bench_C_ExecuteUbergraph_BP_Armor_Bench_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


