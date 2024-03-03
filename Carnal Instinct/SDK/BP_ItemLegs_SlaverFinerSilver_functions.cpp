#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemLegs_SlaverFinerSilver.BP_ItemLegs_SlaverFinerSilver_C
// (Actor)

class UClass* ABP_ItemLegs_SlaverFinerSilver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemLegs_SlaverFinerSilver_C");

	return Clss;
}


// BP_ItemLegs_SlaverFinerSilver_C BP_ItemLegs_SlaverFinerSilver.Default__BP_ItemLegs_SlaverFinerSilver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemLegs_SlaverFinerSilver_C* ABP_ItemLegs_SlaverFinerSilver_C::GetDefaultObj()
{
	static class ABP_ItemLegs_SlaverFinerSilver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemLegs_SlaverFinerSilver_C*>(ABP_ItemLegs_SlaverFinerSilver_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemLegs_SlaverFinerSilver.BP_ItemLegs_SlaverFinerSilver_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemLegs_SlaverFinerSilver_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemLegs_SlaverFinerSilver_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemLegs_SlaverFinerSilver.BP_ItemLegs_SlaverFinerSilver_C.ExecuteUbergraph_BP_ItemLegs_SlaverFinerSilver
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemLegs_SlaverFinerSilver_C::ExecuteUbergraph_BP_ItemLegs_SlaverFinerSilver(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemLegs_SlaverFinerSilver_C", "ExecuteUbergraph_BP_ItemLegs_SlaverFinerSilver");

	Params::ABP_ItemLegs_SlaverFinerSilver_C_ExecuteUbergraph_BP_ItemLegs_SlaverFinerSilver_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


