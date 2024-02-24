#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Fortification_Wood_Spikes.BP_Fortification_Wood_Spikes_C
// (Actor)

class UClass* ABP_Fortification_Wood_Spikes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Fortification_Wood_Spikes_C");

	return Clss;
}


// BP_Fortification_Wood_Spikes_C BP_Fortification_Wood_Spikes.Default__BP_Fortification_Wood_Spikes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Fortification_Wood_Spikes_C* ABP_Fortification_Wood_Spikes_C::GetDefaultObj()
{
	static class ABP_Fortification_Wood_Spikes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Fortification_Wood_Spikes_C*>(ABP_Fortification_Wood_Spikes_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Fortification_Wood_Spikes.BP_Fortification_Wood_Spikes_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Fortification_Wood_Spikes_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Fortification_Wood_Spikes_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Fortification_Wood_Spikes.BP_Fortification_Wood_Spikes_C.ExecuteUbergraph_BP_Fortification_Wood_Spikes
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Fortification_Wood_Spikes_C::ExecuteUbergraph_BP_Fortification_Wood_Spikes(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Fortification_Wood_Spikes_C", "ExecuteUbergraph_BP_Fortification_Wood_Spikes");

	Params::ABP_Fortification_Wood_Spikes_C_ExecuteUbergraph_BP_Fortification_Wood_Spikes_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


