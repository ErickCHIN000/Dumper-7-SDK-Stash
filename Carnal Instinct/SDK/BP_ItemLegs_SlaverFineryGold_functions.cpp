#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemLegs_SlaverFineryGold.BP_ItemLegs_SlaverFineryGold_C
// (Actor)

class UClass* ABP_ItemLegs_SlaverFineryGold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemLegs_SlaverFineryGold_C");

	return Clss;
}


// BP_ItemLegs_SlaverFineryGold_C BP_ItemLegs_SlaverFineryGold.Default__BP_ItemLegs_SlaverFineryGold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemLegs_SlaverFineryGold_C* ABP_ItemLegs_SlaverFineryGold_C::GetDefaultObj()
{
	static class ABP_ItemLegs_SlaverFineryGold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemLegs_SlaverFineryGold_C*>(ABP_ItemLegs_SlaverFineryGold_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemLegs_SlaverFineryGold.BP_ItemLegs_SlaverFineryGold_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemLegs_SlaverFineryGold_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemLegs_SlaverFineryGold_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemLegs_SlaverFineryGold.BP_ItemLegs_SlaverFineryGold_C.ExecuteUbergraph_BP_ItemLegs_SlaverFineryGold
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemLegs_SlaverFineryGold_C::ExecuteUbergraph_BP_ItemLegs_SlaverFineryGold(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemLegs_SlaverFineryGold_C", "ExecuteUbergraph_BP_ItemLegs_SlaverFineryGold");

	Params::ABP_ItemLegs_SlaverFineryGold_C_ExecuteUbergraph_BP_ItemLegs_SlaverFineryGold_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


