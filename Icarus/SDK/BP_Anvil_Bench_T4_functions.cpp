#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Anvil_Bench_T4.BP_Anvil_Bench_T4_C
// (Actor)

class UClass* ABP_Anvil_Bench_T4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Anvil_Bench_T4_C");

	return Clss;
}


// BP_Anvil_Bench_T4_C BP_Anvil_Bench_T4.Default__BP_Anvil_Bench_T4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Anvil_Bench_T4_C* ABP_Anvil_Bench_T4_C::GetDefaultObj()
{
	static class ABP_Anvil_Bench_T4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Anvil_Bench_T4_C*>(ABP_Anvil_Bench_T4_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Anvil_Bench_T4.BP_Anvil_Bench_T4_C.EnergyNetworkStateUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Anvil_Bench_T4_C::EnergyNetworkStateUpdate(bool Active, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Anvil_Bench_T4_C", "EnergyNetworkStateUpdate");

	Params::ABP_Anvil_Bench_T4_C_EnergyNetworkStateUpdate_Params Parms{};

	Parms.Active = Active;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Anvil_Bench_T4.BP_Anvil_Bench_T4_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Anvil_Bench_T4_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Anvil_Bench_T4_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Anvil_Bench_T4.BP_Anvil_Bench_T4_C.ExecuteUbergraph_BP_Anvil_Bench_T4
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Anvil_Bench_T4_C::ExecuteUbergraph_BP_Anvil_Bench_T4(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Anvil_Bench_T4_C", "ExecuteUbergraph_BP_Anvil_Bench_T4");

	Params::ABP_Anvil_Bench_T4_C_ExecuteUbergraph_BP_Anvil_Bench_T4_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


