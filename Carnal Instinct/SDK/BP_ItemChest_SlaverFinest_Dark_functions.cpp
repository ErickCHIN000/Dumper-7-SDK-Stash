#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemChest_SlaverFinest_Dark.BP_ItemChest_SlaverFinest_Dark_C
// (Actor)

class UClass* ABP_ItemChest_SlaverFinest_Dark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemChest_SlaverFinest_Dark_C");

	return Clss;
}


// BP_ItemChest_SlaverFinest_Dark_C BP_ItemChest_SlaverFinest_Dark.Default__BP_ItemChest_SlaverFinest_Dark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemChest_SlaverFinest_Dark_C* ABP_ItemChest_SlaverFinest_Dark_C::GetDefaultObj()
{
	static class ABP_ItemChest_SlaverFinest_Dark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemChest_SlaverFinest_Dark_C*>(ABP_ItemChest_SlaverFinest_Dark_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemChest_SlaverFinest_Dark.BP_ItemChest_SlaverFinest_Dark_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemChest_SlaverFinest_Dark_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemChest_SlaverFinest_Dark_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemChest_SlaverFinest_Dark.BP_ItemChest_SlaverFinest_Dark_C.ExecuteUbergraph_BP_ItemChest_SlaverFinest_Dark
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemChest_SlaverFinest_Dark_C::ExecuteUbergraph_BP_ItemChest_SlaverFinest_Dark(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemChest_SlaverFinest_Dark_C", "ExecuteUbergraph_BP_ItemChest_SlaverFinest_Dark");

	Params::ABP_ItemChest_SlaverFinest_Dark_C_ExecuteUbergraph_BP_ItemChest_SlaverFinest_Dark_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


