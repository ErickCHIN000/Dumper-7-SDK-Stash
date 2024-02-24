#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GGVehicleController.BP_GGVehicleController_C
// (Actor)

class UClass* ABP_GGVehicleController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GGVehicleController_C");

	return Clss;
}


// BP_GGVehicleController_C BP_GGVehicleController.Default__BP_GGVehicleController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GGVehicleController_C* ABP_GGVehicleController_C::GetDefaultObj()
{
	static class ABP_GGVehicleController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GGVehicleController_C*>(ABP_GGVehicleController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GGVehicleController.BP_GGVehicleController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_GGVehicleController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGVehicleController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GGVehicleController.BP_GGVehicleController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GGVehicleController_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGVehicleController_C", "ReceiveTick");

	Params::ABP_GGVehicleController_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GGVehicleController.BP_GGVehicleController_C.ExecuteUbergraph_BP_GGVehicleController
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GGVehicleController_C::ExecuteUbergraph_BP_GGVehicleController(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGVehicleController_C", "ExecuteUbergraph_BP_GGVehicleController");

	Params::ABP_GGVehicleController_C_ExecuteUbergraph_BP_GGVehicleController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


