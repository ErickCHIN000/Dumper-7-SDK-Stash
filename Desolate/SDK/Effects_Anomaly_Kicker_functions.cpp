#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_Anomaly_Kicker.Effects_Anomaly_Kicker_C
// (Actor)

class UClass* AEffects_Anomaly_Kicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_Anomaly_Kicker_C");

	return Clss;
}


// Effects_Anomaly_Kicker_C Effects_Anomaly_Kicker.Default__Effects_Anomaly_Kicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_Anomaly_Kicker_C* AEffects_Anomaly_Kicker_C::GetDefaultObj()
{
	static class AEffects_Anomaly_Kicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_Anomaly_Kicker_C*>(AEffects_Anomaly_Kicker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Effects_Anomaly_Kicker.Effects_Anomaly_Kicker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEffects_Anomaly_Kicker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_Anomaly_Kicker_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Effects_Anomaly_Kicker.Effects_Anomaly_Kicker_C.ExecuteUbergraph_Effects_Anomaly_Kicker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffects_Anomaly_Kicker_C::ExecuteUbergraph_Effects_Anomaly_Kicker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_Anomaly_Kicker_C", "ExecuteUbergraph_Effects_Anomaly_Kicker");

	Params::AEffects_Anomaly_Kicker_C_ExecuteUbergraph_Effects_Anomaly_Kicker_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


