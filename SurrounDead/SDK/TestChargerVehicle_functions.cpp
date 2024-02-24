#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass TestChargerVehicle.TestChargerVehicle_C
// (None)

class UClass* UTestChargerVehicle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestChargerVehicle_C");

	return Clss;
}


// TestChargerVehicle_C TestChargerVehicle.Default__TestChargerVehicle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTestChargerVehicle_C* UTestChargerVehicle_C::GetDefaultObj()
{
	static class UTestChargerVehicle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestChargerVehicle_C*>(UTestChargerVehicle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TestChargerVehicle.TestChargerVehicle_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UTestChargerVehicle_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestChargerVehicle_C", "AnimGraph");

	Params::UTestChargerVehicle_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function TestChargerVehicle.TestChargerVehicle_C.ExecuteUbergraph_TestChargerVehicle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTestChargerVehicle_C::ExecuteUbergraph_TestChargerVehicle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestChargerVehicle_C", "ExecuteUbergraph_TestChargerVehicle");

	Params::UTestChargerVehicle_C_ExecuteUbergraph_TestChargerVehicle_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


