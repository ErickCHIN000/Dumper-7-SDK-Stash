#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Vehicle_SUV.BP_Vehicle_SUV_C
// (Actor, Pawn)

class UClass* ABP_Vehicle_SUV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Vehicle_SUV_C");

	return Clss;
}


// BP_Vehicle_SUV_C BP_Vehicle_SUV.Default__BP_Vehicle_SUV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Vehicle_SUV_C* ABP_Vehicle_SUV_C::GetDefaultObj()
{
	static class ABP_Vehicle_SUV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Vehicle_SUV_C*>(ABP_Vehicle_SUV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Vehicle_SUV.BP_Vehicle_SUV_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Vehicle_SUV_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_SUV_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Vehicle_SUV.BP_Vehicle_SUV_C.EngineUpdate
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Vehicle_SUV_C::EngineUpdate(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_SUV_C", "EngineUpdate");

	Params::ABP_Vehicle_SUV_C_EngineUpdate_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Vehicle_SUV.BP_Vehicle_SUV_C.ExecuteUbergraph_BP_Vehicle_SUV
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsOn                                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Vehicle_SUV_C::ExecuteUbergraph_BP_Vehicle_SUV(int32 EntryPoint, bool K2Node_Event_IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_SUV_C", "ExecuteUbergraph_BP_Vehicle_SUV");

	Params::ABP_Vehicle_SUV_C_ExecuteUbergraph_BP_Vehicle_SUV_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsOn = K2Node_Event_IsOn;

	UObject::ProcessEvent(Func, &Parms);

}

}


