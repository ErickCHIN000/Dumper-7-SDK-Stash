#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PhysConstraint_CharGrab.BP_PhysConstraint_CharGrab_C
// (Actor)

class UClass* ABP_PhysConstraint_CharGrab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PhysConstraint_CharGrab_C");

	return Clss;
}


// BP_PhysConstraint_CharGrab_C BP_PhysConstraint_CharGrab.Default__BP_PhysConstraint_CharGrab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PhysConstraint_CharGrab_C* ABP_PhysConstraint_CharGrab_C::GetDefaultObj()
{
	static class ABP_PhysConstraint_CharGrab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PhysConstraint_CharGrab_C*>(ABP_PhysConstraint_CharGrab_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PhysConstraint_CharGrab.BP_PhysConstraint_CharGrab_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PhysConstraint_CharGrab_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhysConstraint_CharGrab_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhysConstraint_CharGrab.BP_PhysConstraint_CharGrab_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhysConstraint_CharGrab_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhysConstraint_CharGrab_C", "ReceiveTick");

	Params::ABP_PhysConstraint_CharGrab_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhysConstraint_CharGrab.BP_PhysConstraint_CharGrab_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhysConstraint_CharGrab_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhysConstraint_CharGrab_C", "ReceiveEndPlay");

	Params::ABP_PhysConstraint_CharGrab_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhysConstraint_CharGrab.BP_PhysConstraint_CharGrab_C.ExecuteUbergraph_BP_PhysConstraint_CharGrab
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhysConstraint_CharGrab_C::ExecuteUbergraph_BP_PhysConstraint_CharGrab(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhysConstraint_CharGrab_C", "ExecuteUbergraph_BP_PhysConstraint_CharGrab");

	Params::ABP_PhysConstraint_CharGrab_C_ExecuteUbergraph_BP_PhysConstraint_CharGrab_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


