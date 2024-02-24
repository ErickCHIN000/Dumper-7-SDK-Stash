#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpikeActivateParticleLight.BP_SpikeActivateParticleLight_C
// (Actor)

class UClass* ABP_SpikeActivateParticleLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpikeActivateParticleLight_C");

	return Clss;
}


// BP_SpikeActivateParticleLight_C BP_SpikeActivateParticleLight.Default__BP_SpikeActivateParticleLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SpikeActivateParticleLight_C* ABP_SpikeActivateParticleLight_C::GetDefaultObj()
{
	static class ABP_SpikeActivateParticleLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SpikeActivateParticleLight_C*>(ABP_SpikeActivateParticleLight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SpikeActivateParticleLight.BP_SpikeActivateParticleLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SpikeActivateParticleLight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpikeActivateParticleLight_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SpikeActivateParticleLight.BP_SpikeActivateParticleLight_C.ExecuteUbergraph_BP_SpikeActivateParticleLight
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpikeActivateParticleLight_C::ExecuteUbergraph_BP_SpikeActivateParticleLight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpikeActivateParticleLight_C", "ExecuteUbergraph_BP_SpikeActivateParticleLight");

	Params::ABP_SpikeActivateParticleLight_C_ExecuteUbergraph_BP_SpikeActivateParticleLight_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


