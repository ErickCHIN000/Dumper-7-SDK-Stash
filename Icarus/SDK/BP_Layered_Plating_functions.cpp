#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Layered_Plating.BP_Layered_Plating_C
// (Actor)

class UClass* ABP_Layered_Plating_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Layered_Plating_C");

	return Clss;
}


// BP_Layered_Plating_C BP_Layered_Plating.Default__BP_Layered_Plating_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Layered_Plating_C* ABP_Layered_Plating_C::GetDefaultObj()
{
	static class ABP_Layered_Plating_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Layered_Plating_C*>(ABP_Layered_Plating_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Layered_Plating.BP_Layered_Plating_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Layered_Plating_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Layered_Plating_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Layered_Plating.BP_Layered_Plating_C.ExecuteUbergraph_BP_Layered_Plating
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Layered_Plating_C::ExecuteUbergraph_BP_Layered_Plating(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Layered_Plating_C", "ExecuteUbergraph_BP_Layered_Plating");

	Params::ABP_Layered_Plating_C_ExecuteUbergraph_BP_Layered_Plating_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


