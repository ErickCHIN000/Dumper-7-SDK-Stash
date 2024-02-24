#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SnowLeopard_Trophy.BP_SnowLeopard_Trophy_C
// (Actor)

class UClass* ABP_SnowLeopard_Trophy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SnowLeopard_Trophy_C");

	return Clss;
}


// BP_SnowLeopard_Trophy_C BP_SnowLeopard_Trophy.Default__BP_SnowLeopard_Trophy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SnowLeopard_Trophy_C* ABP_SnowLeopard_Trophy_C::GetDefaultObj()
{
	static class ABP_SnowLeopard_Trophy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SnowLeopard_Trophy_C*>(ABP_SnowLeopard_Trophy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SnowLeopard_Trophy.BP_SnowLeopard_Trophy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SnowLeopard_Trophy_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnowLeopard_Trophy_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SnowLeopard_Trophy.BP_SnowLeopard_Trophy_C.ExecuteUbergraph_BP_SnowLeopard_Trophy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SnowLeopard_Trophy_C::ExecuteUbergraph_BP_SnowLeopard_Trophy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnowLeopard_Trophy_C", "ExecuteUbergraph_BP_SnowLeopard_Trophy");

	Params::ABP_SnowLeopard_Trophy_C_ExecuteUbergraph_BP_SnowLeopard_Trophy_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


