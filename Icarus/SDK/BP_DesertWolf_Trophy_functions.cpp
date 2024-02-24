#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DesertWolf_Trophy.BP_DesertWolf_Trophy_C
// (Actor)

class UClass* ABP_DesertWolf_Trophy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DesertWolf_Trophy_C");

	return Clss;
}


// BP_DesertWolf_Trophy_C BP_DesertWolf_Trophy.Default__BP_DesertWolf_Trophy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DesertWolf_Trophy_C* ABP_DesertWolf_Trophy_C::GetDefaultObj()
{
	static class ABP_DesertWolf_Trophy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DesertWolf_Trophy_C*>(ABP_DesertWolf_Trophy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DesertWolf_Trophy.BP_DesertWolf_Trophy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DesertWolf_Trophy_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DesertWolf_Trophy_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DesertWolf_Trophy.BP_DesertWolf_Trophy_C.ExecuteUbergraph_BP_DesertWolf_Trophy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DesertWolf_Trophy_C::ExecuteUbergraph_BP_DesertWolf_Trophy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DesertWolf_Trophy_C", "ExecuteUbergraph_BP_DesertWolf_Trophy");

	Params::ABP_DesertWolf_Trophy_C_ExecuteUbergraph_BP_DesertWolf_Trophy_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


