#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemChest_SlaverFinest_Gold.BP_ItemChest_SlaverFinest_Gold_C
// (Actor)

class UClass* ABP_ItemChest_SlaverFinest_Gold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemChest_SlaverFinest_Gold_C");

	return Clss;
}


// BP_ItemChest_SlaverFinest_Gold_C BP_ItemChest_SlaverFinest_Gold.Default__BP_ItemChest_SlaverFinest_Gold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemChest_SlaverFinest_Gold_C* ABP_ItemChest_SlaverFinest_Gold_C::GetDefaultObj()
{
	static class ABP_ItemChest_SlaverFinest_Gold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemChest_SlaverFinest_Gold_C*>(ABP_ItemChest_SlaverFinest_Gold_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemChest_SlaverFinest_Gold.BP_ItemChest_SlaverFinest_Gold_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemChest_SlaverFinest_Gold_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemChest_SlaverFinest_Gold_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemChest_SlaverFinest_Gold.BP_ItemChest_SlaverFinest_Gold_C.ExecuteUbergraph_BP_ItemChest_SlaverFinest_Gold
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemChest_SlaverFinest_Gold_C::ExecuteUbergraph_BP_ItemChest_SlaverFinest_Gold(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemChest_SlaverFinest_Gold_C", "ExecuteUbergraph_BP_ItemChest_SlaverFinest_Gold");

	Params::ABP_ItemChest_SlaverFinest_Gold_C_ExecuteUbergraph_BP_ItemChest_SlaverFinest_Gold_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


