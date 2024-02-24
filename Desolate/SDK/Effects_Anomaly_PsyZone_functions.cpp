#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_Anomaly_PsyZone.Effects_Anomaly_PsyZone_C
// (Actor)

class UClass* AEffects_Anomaly_PsyZone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_Anomaly_PsyZone_C");

	return Clss;
}


// Effects_Anomaly_PsyZone_C Effects_Anomaly_PsyZone.Default__Effects_Anomaly_PsyZone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_Anomaly_PsyZone_C* AEffects_Anomaly_PsyZone_C::GetDefaultObj()
{
	static class AEffects_Anomaly_PsyZone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_Anomaly_PsyZone_C*>(AEffects_Anomaly_PsyZone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Effects_Anomaly_PsyZone.Effects_Anomaly_PsyZone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEffects_Anomaly_PsyZone_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_Anomaly_PsyZone_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Effects_Anomaly_PsyZone.Effects_Anomaly_PsyZone_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffects_Anomaly_PsyZone_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_Anomaly_PsyZone_C", "ReceiveTick");

	Params::AEffects_Anomaly_PsyZone_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Effects_Anomaly_PsyZone.Effects_Anomaly_PsyZone_C.ExecuteUbergraph_Effects_Anomaly_PsyZone
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffects_Anomaly_PsyZone_C::ExecuteUbergraph_Effects_Anomaly_PsyZone(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_Anomaly_PsyZone_C", "ExecuteUbergraph_Effects_Anomaly_PsyZone");

	Params::AEffects_Anomaly_PsyZone_C_ExecuteUbergraph_Effects_Anomaly_PsyZone_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


