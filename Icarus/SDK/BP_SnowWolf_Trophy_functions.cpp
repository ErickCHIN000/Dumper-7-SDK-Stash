#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SnowWolf_Trophy.BP_SnowWolf_Trophy_C
// (Actor)

class UClass* ABP_SnowWolf_Trophy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SnowWolf_Trophy_C");

	return Clss;
}


// BP_SnowWolf_Trophy_C BP_SnowWolf_Trophy.Default__BP_SnowWolf_Trophy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SnowWolf_Trophy_C* ABP_SnowWolf_Trophy_C::GetDefaultObj()
{
	static class ABP_SnowWolf_Trophy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SnowWolf_Trophy_C*>(ABP_SnowWolf_Trophy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SnowWolf_Trophy.BP_SnowWolf_Trophy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SnowWolf_Trophy_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnowWolf_Trophy_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SnowWolf_Trophy.BP_SnowWolf_Trophy_C.ExecuteUbergraph_BP_SnowWolf_Trophy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SnowWolf_Trophy_C::ExecuteUbergraph_BP_SnowWolf_Trophy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnowWolf_Trophy_C", "ExecuteUbergraph_BP_SnowWolf_Trophy");

	Params::ABP_SnowWolf_Trophy_C_ExecuteUbergraph_BP_SnowWolf_Trophy_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


