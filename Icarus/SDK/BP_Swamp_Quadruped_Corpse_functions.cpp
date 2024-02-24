#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Swamp_Quadruped_Corpse.BP_Swamp_Quadruped_Corpse_C
// (Actor)

class UClass* ABP_Swamp_Quadruped_Corpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Swamp_Quadruped_Corpse_C");

	return Clss;
}


// BP_Swamp_Quadruped_Corpse_C BP_Swamp_Quadruped_Corpse.Default__BP_Swamp_Quadruped_Corpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Swamp_Quadruped_Corpse_C* ABP_Swamp_Quadruped_Corpse_C::GetDefaultObj()
{
	static class ABP_Swamp_Quadruped_Corpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Swamp_Quadruped_Corpse_C*>(ABP_Swamp_Quadruped_Corpse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Swamp_Quadruped_Corpse.BP_Swamp_Quadruped_Corpse_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Swamp_Quadruped_Corpse_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Swamp_Quadruped_Corpse_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Swamp_Quadruped_Corpse.BP_Swamp_Quadruped_Corpse_C.ExecuteUbergraph_BP_Swamp_Quadruped_Corpse
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Swamp_Quadruped_Corpse_C::ExecuteUbergraph_BP_Swamp_Quadruped_Corpse(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Swamp_Quadruped_Corpse_C", "ExecuteUbergraph_BP_Swamp_Quadruped_Corpse");

	Params::ABP_Swamp_Quadruped_Corpse_C_ExecuteUbergraph_BP_Swamp_Quadruped_Corpse_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


