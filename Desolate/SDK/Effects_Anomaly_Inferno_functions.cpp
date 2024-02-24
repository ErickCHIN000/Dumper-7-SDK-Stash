#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_Anomaly_Inferno.Effects_Anomaly_Inferno_C
// (Actor)

class UClass* AEffects_Anomaly_Inferno_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_Anomaly_Inferno_C");

	return Clss;
}


// Effects_Anomaly_Inferno_C Effects_Anomaly_Inferno.Default__Effects_Anomaly_Inferno_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_Anomaly_Inferno_C* AEffects_Anomaly_Inferno_C::GetDefaultObj()
{
	static class AEffects_Anomaly_Inferno_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_Anomaly_Inferno_C*>(AEffects_Anomaly_Inferno_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Effects_Anomaly_Inferno.Effects_Anomaly_Inferno_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEffects_Anomaly_Inferno_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_Anomaly_Inferno_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Effects_Anomaly_Inferno.Effects_Anomaly_Inferno_C.ExecuteUbergraph_Effects_Anomaly_Inferno
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffects_Anomaly_Inferno_C::ExecuteUbergraph_Effects_Anomaly_Inferno(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_Anomaly_Inferno_C", "ExecuteUbergraph_Effects_Anomaly_Inferno");

	Params::AEffects_Anomaly_Inferno_C_ExecuteUbergraph_Effects_Anomaly_Inferno_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


